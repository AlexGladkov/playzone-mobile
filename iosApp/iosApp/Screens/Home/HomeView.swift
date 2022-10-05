//
//  HomeView.swift
//  iosApp
//
//  Created by Алексей Гладков on 03.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI
import SharedSDK

struct HomeView: View {
    
    private let homeViewModel = HomeViewModel()
    @State private var isProfilePresented = false
    
    var body: some View {
        ObservingView(statePublisher: statePublisher(homeViewModel.viewStates())) { viewState in
            ZStack {
                VStack {
                    Spacer().frame(height: 16)
                    
                    HStack {
                        Spacer().frame(width: 16)
                        
                        AsyncImage(
                            url: URL(string: viewState.avatarUrl),
                            content: { image in
                            image
                                .resizable()
                                .aspectRatio(contentMode: .fill)
                                .frame(maxWidth: 56, maxHeight: 56)
                        },
                            placeholder: {
                                ProgressView()
                            })
                        .clipShape(Circle())
                        .frame(maxWidth: 56, maxHeight: 56)
                        
                        Spacer().frame(width: 20)
                        
                        VStack(alignment: .leading) {
                            Text(viewState.status)
                                .font(.system(size: 12))
                                .foregroundColor(Color.textPrimary)
                                .opacity(0.5)
                            Text(viewState.username)
                                .font(.system(size: 22))
                                .fontWeight(.bold)
                                .foregroundColor(Color.textPrimary)
                        }
                        
                        Spacer()
                    }
                    .onTapGesture {
                        homeViewModel.obtainEvent(viewEvent: .UserProfileClicked())
                    }
                    
                    Spacer()
                }
            }
            .sheet(isPresented: $isProfilePresented, content: {
                ProfileView()
            })
            .onReceive(sharePublisher(homeViewModel.viewActions()), perform: { viewAction in
                switch viewAction {
                case HomeAction.ShowUserProfile():
                    isProfilePresented = true
                    
                default:
                    break
                }
            })
            .frame(maxWidth: .infinity, maxHeight: .infinity)
            .background(Color.backgroundPrimary)
        }
    }
}

struct HomeView_Previews: PreviewProvider {
    static var previews: some View {
        HomeView()
    }
}
