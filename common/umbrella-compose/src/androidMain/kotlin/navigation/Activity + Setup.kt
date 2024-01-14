package navigation

import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.runtime.CompositionLocalProvider
import androidx.compose.ui.graphics.Color
import com.adeo.kviewmodel.odyssey.setupWithViewModels
import ru.alexgladkov.odyssey.compose.base.Navigator
import ru.alexgladkov.odyssey.compose.extensions.setupWithActivity
import ru.alexgladkov.odyssey.compose.local.LocalRootController
import ru.alexgladkov.odyssey.compose.navigation.RootComposeBuilder
import ru.alexgladkov.odyssey.compose.navigation.modal_navigation.ModalNavigator
import ru.alexgladkov.odyssey.compose.navigation.modal_navigation.configuration.DefaultModalConfiguration
import ru.alexgladkov.odyssey.compose.navigation.modal_navigation.configuration.ModalNavigatorConfiguration
import ru.alexgladkov.odyssey.core.configuration.DisplayType
import theme.AppTheme
import theme.Theme

fun ComponentActivity.setupThemedNavigation() {
    val rootController = RootComposeBuilder().apply { generateGraph() }.build()
    rootController.setupWithActivity(this)
    rootController.setupWithViewModels()

    setContent {
        AppTheme {
            val backgroundColor = Theme.colors.primaryBackground
            rootController.backgroundColor = backgroundColor

            CompositionLocalProvider(
                LocalRootController provides rootController
            ) {
                ModalNavigator(configuration = DefaultModalConfiguration(backgroundColor, DisplayType.EdgeToEdge)) {
                    Navigator(startScreen = NavigationTree.Splash.SplashScreen.name)
                }
            }
        }
    }
}