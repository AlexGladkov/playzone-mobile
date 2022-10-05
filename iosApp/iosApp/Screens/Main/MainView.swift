//
//  MainView.swift
//  iosApp
//
//  Created by Алексей Гладков on 03.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct MainView: View {
    var body: some View {
        TabView {
            HomeView()
                .tabItem {
                    Label("Profile", systemImage: "house")
                }
            
            SearchView()
                .tabItem {
                    Label("Search", systemImage: "magnifyingglass")
                }
            
            TournamentsView()
                .tabItem {
                    Label("Profile", systemImage: "person.fill")
                }
            
            VideosView()
                .tabItem {
                    Label("Profile", systemImage: "person.fill")
                }
        }
    }
}

struct MainView_Previews: PreviewProvider {
    static var previews: some View {
        MainView()
    }
}
