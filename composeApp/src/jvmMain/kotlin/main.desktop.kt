import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Search
import androidx.compose.runtime.CompositionLocalProvider
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.graphics.vector.rememberVectorPainter
import androidx.compose.ui.input.key.Key
import androidx.compose.ui.input.key.KeyShortcut
import androidx.compose.ui.unit.DpSize
import androidx.compose.ui.unit.dp
import androidx.compose.ui.window.MenuBar
import androidx.compose.ui.window.Tray
import androidx.compose.ui.window.Window
import androidx.compose.ui.window.WindowPlacement
import androidx.compose.ui.window.WindowPosition
import androidx.compose.ui.window.application
import androidx.compose.ui.window.rememberNotification
import androidx.compose.ui.window.rememberTrayState
import androidx.compose.ui.window.rememberWindowState
import desktop.AppSettings
import desktop.LocalAppSettings
import desktop.WindowState
import navigation.navigationGraph
import ru.alexgladkov.odyssey.compose.setup.OdysseyConfiguration
import ru.alexgladkov.odyssey.compose.setup.setNavigationContent
import theme.AppTheme
import theme.Theme

fun main() = application {
    val appSettings = remember { AppSettings() }
    val windowState by appSettings.windowState.collectAsState()
    PlatformSDK.init(configuration = PlatformConfiguration())

    val trayState = rememberTrayState()
    val notificaition = rememberNotification("Notification", "Hello, Playzone")

    val state = rememberWindowState(
        placement = WindowPlacement.Floating,
        size = DpSize(1024.dp, 800.dp),
        position = WindowPosition.Aligned(Alignment.Center)
    )

    Tray(
        state = trayState,
        icon = rememberVectorPainter(Icons.Default.Search),
        menu = {
            Item(
                "Push",
                onClick = {
                    trayState.sendNotification(notification = notificaition)
                }
            )

            Item(
                "Exit",
                onClick = {
                    exitApplication()
                }
            )
        }
    )

    Window(
        onCloseRequest = ::exitApplication,
        title = "PlayZone Desktop",
        state = state
    ) {

        MenuBar {
            Menu("File", mnemonic = 'F') {
                Item(text = "Save", onClick = { println("Saved") }, shortcut = KeyShortcut(Key.S, ctrl = true))
            }
        }

        when (val ws = windowState) {
            WindowState.Maximized -> state.placement = WindowPlacement.Maximized
            WindowState.FullScreen -> state.placement = WindowPlacement.Fullscreen
            is WindowState.Custom -> {
                state.placement = WindowPlacement.Floating
                state.size = DpSize(ws.width, ws.height)
            }
        }

        AppTheme {
            val configration = OdysseyConfiguration(
                backgroundColor = Theme.colors.primaryBackground
            )

            CompositionLocalProvider(
                LocalAppSettings provides appSettings
            ) {
                setNavigationContent(configration, onApplicationFinish = {
                    exitApplication()
                }) {
                    navigationGraph()
                }
            }
        }
    }
}