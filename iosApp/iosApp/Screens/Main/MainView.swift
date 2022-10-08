//
//  MainView.swift
//  iosApp
//
//  Created by Алексей Гладков on 08.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct MainView: View {
    var body: some View {
        TabView {
            HomeScreen()
                .tabItem {
                    Label("Home", systemImage: "house")
                }
            
            SearchScreen()
                .tabItem {
                    Label("Search", systemImage: "magnifyingglass")
                }
            
            EventsScreen()
                .tabItem {
                    Label("Events", systemImage: "person.fill")
                }
            
            VideosScreen()
                .tabItem {
                    Label("Events", systemImage: "person.fill")
                }
        }
    }
}

struct MainView_Previews: PreviewProvider {
    static var previews: some View {
        MainView()
    }
}
