//
//  ViewController.swift
//  Sample
//
//  Created by Rob Visentin on 12/4/18.
//  Copyright © 2018 Rocket Insights. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    /// Presents the shared UnityViewController
    @IBAction func showUnity() {
        let nav = UINavigationController(rootViewController: UnityViewController.shared)
        UnityViewController.shared.navigationItem.leftBarButtonItem = UIBarButtonItem(
            image: #imageLiteral(resourceName: "btn-x"),
            style: .plain,
            target: self,
            action: #selector(hideUnity)
        )

        present(nav, animated: true)
    }

    @IBAction func hideUnity() {
        presentedViewController?.dismiss(animated: true)
    }

}

