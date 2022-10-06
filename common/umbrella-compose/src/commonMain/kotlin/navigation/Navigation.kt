package navigation

import SplashScreen
import navigation.admin.mainAdminFlow
import ru.alexgladkov.odyssey.compose.extensions.screen
import ru.alexgladkov.odyssey.compose.navigation.RootComposeBuilder

fun RootComposeBuilder.generateGraph(source: NavigationSource) {
    screen(name = NavigationTree.Splash.SplashScreen.name) {
        SplashScreen()
    }

    authFlow()

    when (source) {
        NavigationSource.Android -> {
            mainFlow()
        }

        NavigationSource.Desktop -> {
            mainAdminFlow()
        }

        NavigationSource.IOS -> {}
    }
}
