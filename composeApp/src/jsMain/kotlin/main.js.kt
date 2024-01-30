import androidx.compose.material.Text
import androidx.compose.ui.ExperimentalComposeUiApi
import androidx.compose.ui.unit.sp
import androidx.compose.ui.window.CanvasBasedWindow
import navigation.navigationGraph
import org.jetbrains.skiko.wasm.onWasmReady
import ru.alexgladkov.odyssey.compose.setup.OdysseyConfiguration
import ru.alexgladkov.odyssey.compose.setup.setNavigationContent
import theme.AppTheme
import theme.Theme

@OptIn(ExperimentalComposeUiApi::class)
fun main() {
    onWasmReady {
        CanvasBasedWindow {
            PlatformSDK.init(
                configuration = PlatformConfiguration()
            )

            AppTheme {
                val configuration = OdysseyConfiguration(
                    backgroundColor = Theme.colors.primaryBackground
                )

                setNavigationContent(configuration, onApplicationFinish = {

                }) {
                    navigationGraph()
                }
            }
        }
    }
}