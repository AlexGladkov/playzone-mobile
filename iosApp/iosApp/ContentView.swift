import SwiftUI
import SharedSDK

struct ContentView: View {
    
	var body: some View {
        LoginView()
            .background(Color.backgroundPrimary)
	}
}

struct ContentView_Previews: PreviewProvider {
	static var previews: some View {
		ContentView()
	}
}
