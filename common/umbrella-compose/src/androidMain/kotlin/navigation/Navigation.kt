package navigation

import SplashScreen
import androidx.compose.material.Text
import androidx.compose.ui.graphics.Color
import ru.alexgladkov.odyssey.compose.extensions.screen
import ru.alexgladkov.odyssey.compose.navigation.RootComposeBuilder

fun RootComposeBuilder.generateGraph() {
    screen(name = NavigationTree.Splash.SplashScreen.name) {
        SplashScreen()
    }

    screen(name = NavigationTree.Main.Game.name) {
        Text("Hello, Game Detail", color = Color.White)
    }

    authFlow()
    mainFlow()
}
