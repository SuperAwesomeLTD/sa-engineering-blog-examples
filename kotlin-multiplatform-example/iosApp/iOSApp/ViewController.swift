//
//  ViewController.swift
//  iOSApp
//
//  Created by Gabriel Coman on 02/04/2019.
//  Copyright © 2019 Gabriel Coman. All rights reserved.
//

import SACommonLib
import UIKit

class ViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let common = CommonClass()
        
        print("Platform is \(common.perform())")
    }
}
