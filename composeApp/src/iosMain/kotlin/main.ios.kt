import androidx.compose.material.Text
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.compose.ui.window.ComposeUIViewController
import navigation.navigationGraph
import platform.UIKit.UIViewController
import ru.alexgladkov.odyssey.compose.setup.OdysseyConfiguration
import ru.alexgladkov.odyssey.compose.setup.setNavigationContent
import theme.AppTheme
import theme.Theme

fun MainViewController(): UIViewController =
    ComposeUIViewController {
        PlatformSDK.init(
            configuration = PlatformConfiguration()
        )

        AppTheme {
            val configration = OdysseyConfiguration(
                backgroundColor = Theme.colors.primaryBackground
            )

            setNavigationContent(configration, onApplicationFinish = {

            }) {
                navigationGraph()
            }
        }
    }