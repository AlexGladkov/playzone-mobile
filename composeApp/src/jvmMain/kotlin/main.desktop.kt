import androidx.compose.ui.Alignment
import androidx.compose.ui.unit.dp
import androidx.compose.ui.window.Window
import androidx.compose.ui.window.WindowPosition
import androidx.compose.ui.window.application
import androidx.compose.ui.window.rememberWindowState
import navigation.navigationGraph
import ru.alexgladkov.odyssey.compose.setup.OdysseyConfiguration
import ru.alexgladkov.odyssey.compose.setup.setNavigationContent
import theme.AppTheme
import theme.Theme

fun main() = application {
    PlatformSDK.init(configuration = PlatformConfiguration())

    Window(
        onCloseRequest = ::exitApplication,
        title = "PlayZone Desktop",
        state = rememberWindowState(
            width = 1024.dp,
            height = 800.dp,
            position = WindowPosition.Aligned(Alignment.Center)
        )
    ) {
        AppTheme {
            val configration = OdysseyConfiguration(
                backgroundColor = Theme.colors.primaryBackground
            )

            setNavigationContent(configration, onApplicationFinish = {
                exitApplication()
            }) {
                navigationGraph()
            }
        }
    }
}