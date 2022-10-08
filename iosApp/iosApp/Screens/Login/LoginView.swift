//
//  LoginView.swift
//  iosApp
//
//  Created by Алексей Гладков on 08.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI
import SharedSDK

struct LoginView: View {
    
    let viewState: LoginViewState
    let eventHandler: (LoginEvent) -> Void
   
    var body: some View {
        VStack {
            VStack {
                Spacer().frame(height: 36)
                Text("Login Now")
                    .foregroundColor(.textPrimary)
                    .fontWeight(.bold)
                    .font(.system(size: 24))
                
                Text("Welcome back to PlayZone! Enter your email addres and your password to enjoy the latest features of PlayZone")
                    .foregroundColor(.textPrimary.opacity(0.5))
                    .fixedSize(horizontal: false, vertical: true)
                    .multilineTextAlignment(.center)
                    .padding(EdgeInsets(top: 16, leading: 30, bottom: 0, trailing: 30))
                
                Spacer().frame(height: 50)
                
                CommonTextField(hint: "Login", enabled: !viewState.isSending) { newValue in
                    eventHandler(.EmailChanged(value: newValue))
                }
                
                Spacer().frame(height: 24)
                CommonTextField(hint: "Password", enabled: !viewState.isSending, isSecure: !viewState.passwordHidden) { newValue in
                    eventHandler(.PasswordChanged(value: newValue))
                }
                
                LoginActionView(viewState: viewState, onForgotClicked: {
                    eventHandler(.ForgotClick())
                }, onSubmitClicked: {
                    eventHandler(.LoginClick())
                })
            }
            
            Spacer()
            
            HStack {
                Text("Don't have account?")
                    .foregroundColor(.textPrimary)
                    .opacity(0.5)
                
                Text("Create one")
                    .foregroundColor(.tintColor)
                    .fontWeight(.bold)
                    .onTapGesture {
                        eventHandler(.RegistrationClick())
                    }
            }
        }
    }
}

struct LoginActionView: View {
    
    let viewState: LoginViewState
    let onForgotClicked: () -> Void
    let onSubmitClicked: () -> Void
    
    var body: some View {
        VStack {
            Spacer().frame(height: 30)
            HStack {
                Spacer()
                Text("Forgot Password")
                    .foregroundColor(.tintColor)
                    .onTapGesture {
                        onForgotClicked()
                    }
                Spacer().frame(width: 30)
            }
            Spacer().frame(height: 30)
            ActionButton(title: "Login Now", enabled: !viewState.isSending) {
                onSubmitClicked()
            }
            .frame(height: 56)
            Spacer()
        }
    }
}

struct LoginView_Previews: PreviewProvider {
    static var previews: some View {
        LoginView(viewState: LoginViewState(email: "bob298", password: "23456", isSending: false, passwordHidden: true), eventHandler: { event in
            
        })
        .background(Color.backgroundPrimary)
        .background(ignoresSafeAreaEdges: [.top, .bottom])
    }
}
