//
//  LoginScreen.swift
//  iosApp
//
//  Created by Алексей Гладков on 08.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI
import SharedSDK

struct LoginScreen: View {
    
    @State private var isForgotPresented = false
    @State private var isRegistrationPresented = false
    @State private var isMainPresented = false
    private let loginViewModel = LoginViewModel()
    
    var body: some View {
        ObservingView(statePublisher: statePublisher(loginViewModel.viewStates())) { viewState in
            LoginView(viewState: viewState) { event in
                loginViewModel.obtainEvent(viewEvent: event)
            }
        }
        .sheet(isPresented: $isForgotPresented, content: {
            ForgotScreen()
        })
        .sheet(isPresented: $isRegistrationPresented, content: {
            RegistrationScreen()
        })
        .fullScreenCover(isPresented: $isMainPresented, content: {
            MainView()
        })
        .onReceive(sharePublisher(loginViewModel.viewActions())) { action in
            switch (action) {
            case LoginAction.OpenForgotPasswordScreen():
                isForgotPresented = true
                
            case LoginAction.OpenRegistrationScreen():
                isRegistrationPresented = true
                
            case LoginAction.OpenMainFlow():
                isMainPresented = true
                
            default:
                break
            }
        }
    }
}
