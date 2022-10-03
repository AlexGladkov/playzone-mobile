//
//  CommonTextField.swift
//  iosApp
//
//  Created by Алексей Гладков on 02.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import Foundation
import SwiftUI

struct CommonTextField : View {
    
    @State private var value: String = ""
    
    let hintValue: String
    let enabled: Bool
    let isSecure: Bool
    let onValueChanged: (String) -> Void
    
    init(hintValue: String = "", enabled: Bool = true, isSecure: Bool = false, onValueChanged: @escaping (String) -> Void) {
        self.hintValue = hintValue
        self.enabled = enabled
        self.isSecure = isSecure
        self.onValueChanged = onValueChanged
    }
    
    var body: some View {
        ZStack(alignment: .leading) {
            RoundedRectangle(cornerRadius: 10)
                .foregroundColor(Color(hex: 0x1F2430))
            
            if value.isEmpty {
                Text(hintValue)
                    .padding(EdgeInsets(top: 0, leading: 20, bottom: 0, trailing: 20))
                    .foregroundColor(Color(hex: 0x696C75))
                    .font(.system(size: 16))
            }
            
            if isSecure {
                SecureField("", text: $value)
                    .foregroundColor(Color.textPrimary)
                    .font(.system(size: 16))
                    .autocapitalization(.none)
                    .disabled(!enabled)
                    .disableAutocorrection(true)
                    .padding(EdgeInsets(top: 0, leading: 20, bottom: 0, trailing: 20))
                    .onChange(of: value) { newValue in
                        onValueChanged(newValue)
                    }
            } else {
                TextField("", text: $value)
                    .foregroundColor(Color.textPrimary)
                    .font(.system(size: 16))
                    .autocapitalization(.none)
                    .disabled(!enabled)
                    .disableAutocorrection(true)
                    .padding(EdgeInsets(top: 0, leading: 20, bottom: 0, trailing: 20))
                    .onChange(of: value) { newValue in
                        onValueChanged(newValue)
                    }
            }
        }
        .frame(height: 56)
        .padding(EdgeInsets(top: 0, leading: 16, bottom: 0, trailing: 16))
    }
}
