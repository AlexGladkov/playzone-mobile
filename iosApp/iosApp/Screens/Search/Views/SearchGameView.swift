//
//  SearchGameView.swift
//  iosApp
//
//  Created by Алексей Гладков on 04.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI
import SharedSDK

struct SearchGameView: View {
    
    let game: Game
    
    var body: some View {
        HStack {
            Spacer().frame(width: 16)
            
            Rectangle()
                .size(CGSize(width: 51, height: 51))
                .frame(width: 51, height: 51, alignment: .center)
                .foregroundColor(Color.tintPrimary)
                .cornerRadius(8)
            
            VStack {
                Text(game.title.uppercased())
                    .foregroundColor(Color.textPrimary)
                    .fontWeight(.semibold)
            }
            .frame(maxHeight: .infinity, alignment: .topLeading)
            
            Spacer()
        }
    }
}

struct SearchGameView_Previews: PreviewProvider {
    static var previews: some View {
        SearchGameView(game: Game(gameId: "0", title: "Hello"))
    }
}
