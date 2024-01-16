import androidx.compose.ui.window.ComposeUIViewController
import navigation.navigationGraph
import platform.UIKit.UIViewController
import ru.alexgladkov.odyssey.compose.setup.OdysseyConfiguration
import ru.alexgladkov.odyssey.compose.setup.setNavigationContent
import theme.AppTheme
import theme.Theme

fun MainViewController(): UIViewController =
    ComposeUIViewController {
        AppTheme {
            val configuration = OdysseyConfiguration(
                backgroundColor = Theme.colors.primaryBackground
            )

            setNavigationContent(configuration, onApplicationFinish = {
                println("Exit")
            }) {
                navigationGraph()
            }
        }
    }