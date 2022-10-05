//
//  ProfileView.swift
//  iosApp
//
//  Created by Алексей Гладков on 04.10.2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct ProfileView: View {
    var body: some View {
        ZStack {
            Text("Hello, Profile")
                .foregroundColor(Color.textPrimary)
        }
        .frame(maxWidth: .infinity, maxHeight: .infinity)
        .background(Color.backgroundPrimary)
    }
}

struct ProfileView_Previews: PreviewProvider {
    static var previews: some View {
        ProfileView()
    }
}
