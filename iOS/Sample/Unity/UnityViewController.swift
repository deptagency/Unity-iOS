import UIKit

final class UnityViewController: UIViewController {

    // This class must be a singleton because there is only 1 Unity view
    static let shared = UnityViewController()

    var pauseWhenDisappearing = true

    // AppControllerClassName is an extern settable by override app controllers
    // The only way to know which one should be instantiated is to use the class name
    private let unityController = (objc_getClass(AppControllerClassName) as? UnityAppController.Type)?.init()

    private var application: UIApplication?

    private var active = true {
        didSet {
            guard let application = application else {
                preconditionFailure("\(self) is not yet configured")
            }

            if active && !oldValue {
                unityController?.applicationDidBecomeActive(application)
            }
            else if !active && oldValue {
                unityController?.applicationWillResignActive(application)
            }
        }
    }

    private init() {
        super.init(nibName: nil, bundle: nil)
        UnityRegisterLifeCycleListener(self)

        NotificationCenter.default.addObserver(
            self,
            selector: #selector(unityReady),
            name: .UnityReadyNotificationName,
            object: nil
        )
    }

    deinit {
        UnityUnregisterLifeCycleListener(self)
    }

    @available(*, unavailable) required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    override func viewDidLoad() {
        super.viewDidLoad()

        if let unityView = UnityGetGLView() {
            view.addSubview(unityView)
            unityView.frame = view.bounds
        }
    }

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        active = true
    }

    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)

        if pauseWhenDisappearing {
            pause()
        }
    }

    func configure(with application: UIApplication, options: [UIApplication.LaunchOptionsKey: Any]?) {
        guard self.application == nil else {
            fatalError("\(self) has already been configured")
        }

        self.application = application

        UnityMain(CommandLine.argc, CommandLine.unsafeArgv)

        unityController?.application(application, didFinishLaunchingWithOptions: options)
    }

    func pause() {
        active = false
    }

}

// MARK: - LifeCycleListener

extension UnityViewController : LifeCycleListener {

    @objc func didFinishLaunching(_ notification: Notification) {
    }

    @objc func didBecomeActive(_ notification: Notification) {
        if active, let application = notification.object as? UIApplication {
            unityController?.applicationDidBecomeActive(application)
        }
    }

    @objc func willResignActive(_ notification: Notification) {
        if active, let application = notification.object as? UIApplication {
            unityController?.applicationWillResignActive(application)
        }
    }

    @objc func didEnterBackground(_ notification: Notification) {
        if active, let application = notification.object as? UIApplication {
            unityController?.applicationDidEnterBackground(application)
        }
    }

    @objc func willEnterForeground(_ notification: Notification) {
        if active, let application = notification.object as? UIApplication {
            unityController?.applicationWillEnterForeground(application)
        }
    }

    @objc func willTerminate(_ notification: Notification) {
        if active, let application = notification.object as? UIApplication {
            unityController?.applicationWillTerminate(application)
        }
    }

}

// MARK: - Private

private extension UnityViewController {

    @objc func unityReady(_ notification: Notification) {
        if view.window == nil {
            pause()
        }
    }

}
