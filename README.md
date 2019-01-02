# Unity-iOS

A repository of scripts and configs for embedding a Unity app inside a native Swift project. This repo is itself a template for projects wanting to do this. Sample Xcode and Unity projects are included.

## Usage

**This repository uses Git Large File Storage (LFS). To install LFS, follow these instructions:<br/> 
https://help.github.com/articles/installing-git-large-file-storage/**

Clone the repo and run `git lfs pull` in your clone directory, then build and run the sample Swift project. The sample app is a simple screen with a button to launch the Unity AR experience. When running in the simulator, the Unity scene displays text that indicates AR isn't supported. When running on device, the scene displays the Vuforia camera.

Aim the camera at the test image included in this repo to view the astronaut in AR! Tap on the astronaut to trigger an animation.

## Setting up your own project

This repo serves as a template for how to configure both the Xcode and Unity projects for seamless integration of Unity into a native Swift app. If you're starting a new project from scratch, or want to integrate Unity into an existing Xcode project, follow these steps:

### Xcode Setup

1. Add the `iOS/Sample/Config` directory to your project.


2. Add the `iOS/Sample/Unity` directory to your project.


3. If using Cocoapods, change the xcconfig name in the Debug and Release configs in the `Config` directory. You can't use variables in the path, but the included Cocoapods config should be this format:
    - `Pods-$(TARGET_NAME).debug.xcconfig`
    - `Pods-$(TARGET_NAME).debug.xcconfig`


4. Set the Configuration for your Debug and Release targets to the appropiate config from the `Config` directory. Your project settings should then look similar to this:
<img width="512" alt="configuration" src="https://user-images.githubusercontent.com/1039147/50562463-17073000-0ce2-11e9-8a9a-5d7d183bf500.png">


5. Add a new Run Script build phase with the contents of `Copy Unity Data` script (from the sample project) after `Copy Bundle Resources` build phase.


6. If using Vuforia, disable Metal API validation in Scheme -> Options. If not using Vuforia, you can delete `Vuforia.xcconfig` from the `Config` directory.
<img width="860" alt="metal validation" src="https://user-images.githubusercontent.com/1039147/50562486-369e5880-0ce2-11e9-8aba-8330efa8572a.png">


7. Add this line in your app delegate's `didFinishLaunchingWithOptions:`:
```swift
UnityViewController.shared.configure(with: application, options: launchOptions)
```

### Unity Setup

1. Add contents of `Unity/Assets/Editor/Build` and `Unity/Assets/Scripts` to your project

2. Add either `Scene-Device` or `Scene-Simulator` labels to your scenes. The build script looks for these labels to determine which scenes to include for which target. To include a scene on both simulator and device, add both labels. 

3. Make sure project is set to use .NET 4x equivalent in Project Settings.

4. If using Vuforia and on-device data sets (as opposed to a Cloud Target Database), add `ConfigureVuforiaDatasetLoader` to your AR scene.
