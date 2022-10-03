//
//  Color + Custom.swift
//  iosApp
//
//  Created by Алексей Гладков on 02.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import Foundation
import SwiftUI

extension Color {
    static let backgroundPrimary = Color("BackgroundPrimaryColor")
    static let textPrimary = Color("TextPrimaryColor")
    static let textSecondary = Color("TextSecondaryColor")
    static let tintPrimary = Color("TintPrimaryColor")
    
    init(hex: UInt, alpha: Double = 1) {
            self.init(
                .sRGB,
                red: Double((hex >> 16) & 0xff) / 255,
                green: Double((hex >> 08) & 0xff) / 255,
                blue: Double((hex >> 00) & 0xff) / 255,
                opacity: alpha
            )
        }
}
