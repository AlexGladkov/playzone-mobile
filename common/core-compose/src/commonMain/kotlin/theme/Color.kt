package theme

import androidx.compose.runtime.staticCompositionLocalOf
import androidx.compose.ui.graphics.Color

data class PlayzoneColors(
    val primaryBackground: Color,
    val secondaryBackground: Color,
    val primaryAction: Color,
    val primaryTextColor: Color,
    val hintTextColor: Color,
    val highlightTextColor: Color,
    val secondaryTextColor: Color,
    val thirdTextColor: Color,
    val tagColor: Color,
    val tagTextColor: Color
)

val palette = PlayzoneColors(
    primaryBackground = Color(0xFF050B18),
    secondaryBackground = Color(0xFF1F2430),
    primaryAction = Color(0xFFF4D144),
    primaryTextColor = Color(0xFF050B18),
    hintTextColor = Color(0xFF696C75),
    highlightTextColor = Color(0xFFF4D144),
    secondaryTextColor = Color(0xFFFFFFFF),
    thirdTextColor = Color(0xFFEEF2FB),
    tagColor = Color(0xFF41A0E7),
    tagTextColor = Color(0xFF44A9F4),
)

val LocalColorProvider = staticCompositionLocalOf<PlayzoneColors> { error("No default implementation") }