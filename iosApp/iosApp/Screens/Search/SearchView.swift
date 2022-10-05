//
//  SearchView.swift
//  iosApp
//
//  Created by Алексей Гладков on 03.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI
import SharedSDK

struct SearchView: View {
    
    private let searchViewModel = SearchViewModel()
    
    var body: some View {
        ObservingView(statePublisher: statePublisher(searchViewModel.viewStates())) { viewState in
            
            ZStack {
                VStack {
                    Spacer().frame(height: 26)
                    CommonTextField(hintValue: "Search Game") { newValue in
                        searchViewModel.obtainEvent(viewEvent: .QueryChanged(query: newValue))
                    }
                    Spacer().frame(height: 16)
                    ScrollView {
                        VStack {
                            ForEach(viewState.games, id: \.gameId) { game in
                                SearchGameView(game: game)
                            }
                        }
                    }
                    Spacer()
                }
            }
            .frame(maxWidth: .infinity, maxHeight: .infinity)
            .background(Color.backgroundPrimary)
        }
        .onReceive(sharePublisher(searchViewModel.viewActions())) { viewAction in
            switch viewAction {
                
                
            default:
                break
            }
        }
    }
}

struct SearchView_Previews: PreviewProvider {
    static var previews: some View {
        SearchView()
    }
}
