import SwiftUI
import SharedSDK

@main
struct iOSApp: App {
    
    init() {
        PlatformSDK().doInit(configuration: PlatformConfiguration())
    }
    
	var body: some Scene {
		WindowGroup {
			ContentView()
		}
	}
}
