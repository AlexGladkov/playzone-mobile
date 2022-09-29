import SwiftUI
import SharedSDK

struct ContentView: View {

    private let viewModel = LoginViewModel()
    
	var body: some View {
        Button {
            viewModel.obtainEvent(viewEvent: .LoginClick())
        } label: {
            Text("Click Me")
        }

	}
}

struct ContentView_Previews: PreviewProvider {
	static var previews: some View {
		ContentView()
	}
}
