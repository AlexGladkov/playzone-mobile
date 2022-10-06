import setup.setupThemedNavigation
import javax.swing.JFrame
import javax.swing.SwingUtilities

fun main() = SwingUtilities.invokeLater {
    PlatformSDK.init(
        configuration = PlatformConfiguration()
    )

    JFrame().setupThemedNavigation()
}