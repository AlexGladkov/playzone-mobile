//
//  LoginView.swift
//  iosApp
//
//  Created by Алексей Гладков on 02.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import Foundation
import SwiftUI
import SharedSDK

struct LoginView: View {
    
    private let loginViewModel = LoginViewModel()
    @State private var isForgotShowing = false
    @State private var isRegistrationShowing = false
    @State private var isMainPresented = false
    
    var body: some View {
        ObservingView(statePublisher: statePublisher(loginViewModel.viewStates())) { viewState in
            VStack {
                VStack {
                    Spacer()
                        .frame(height: 36)
                    Text("Login Now")
                        .foregroundColor(Color.textPrimary)
                        .fontWeight(.bold)
                        .font(.system(size: 24))
                    Text("Welcome back to PlayZone! Enter your email addres and your password to enjoy the latest features of PlayZone")
                        .foregroundColor(Color.textPrimary)
                        .opacity(0.5)
                        .fixedSize(horizontal: false, vertical: true)
                        .multilineTextAlignment(.center)
                        .padding(EdgeInsets(top: 16, leading: 30, bottom: 0, trailing: 30))
                    Spacer().frame(height: 50)
                    CommonTextField(hintValue: "Email Address", enabled: !viewState.isSending) { email in
                        loginViewModel.obtainEvent(viewEvent: .EmailChanged(value: email))
                    }
                    Spacer().frame(height: 24)
                    CommonTextField(hintValue: "Password", enabled: !viewState.isSending, isSecure: viewState.passwordHidden) { password in
                        loginViewModel.obtainEvent(viewEvent: .PasswordChanged(value: password))
                    }

                    Group {
                        Spacer().frame(height: 30)
                        HStack {
                            Spacer()
                            Text("Forgot Password")
                                .foregroundColor(Color.tintPrimary)
                                .onTapGesture {
                                    loginViewModel.obtainEvent(viewEvent: .ForgotClick())
                                }
                            Spacer().frame(width: 30)
                        }
                        Spacer().frame(height: 30)
                        ActionButton(title: "Login Now", enabled: !viewState.isSending) {
                            loginViewModel.obtainEvent(viewEvent: .LoginClick())
                        }
                        .frame(height: 56)
                    }
                }
                
                Spacer()

                HStack {
                    Text("Don't have account?")
                        .foregroundColor(Color.textPrimary)
                        .opacity(0.5)
                    Spacer().frame(width: 8)
                    Text("Create one")
                        .foregroundColor(Color.tintPrimary)
                        .fontWeight(.bold)
                        .onTapGesture {
                            loginViewModel.obtainEvent(viewEvent: .RegistrationClick())
                        }
                }
            }
            .sheet(isPresented: $isForgotShowing, content: {
                ForgotPasswordView()
            })
            .sheet(isPresented: $isRegistrationShowing, content: {
                RegistrationView()
            })
            .fullScreenCover(isPresented: $isMainPresented, content: {
                MainView()
            })
            .onReceive(sharePublisher(loginViewModel.viewActions())) { action in
                switch (action) {
                case LoginAction.OpenForgotPasswordScreen():
                    isForgotShowing = true
                
                case LoginAction.OpenRegistrationScreen():
                    isRegistrationShowing = true
                    
                case LoginAction.OpenMainFlow():
                    isMainPresented = true
                    
                default:
                    break
                }
            }
        }
    }
}
