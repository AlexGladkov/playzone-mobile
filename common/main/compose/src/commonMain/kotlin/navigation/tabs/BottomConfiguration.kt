package navigation.tabs

import androidx.compose.runtime.Composable
import ru.alexgladkov.odyssey.compose.navigation.RootComposeBuilder
import ru.alexgladkov.odyssey.compose.navigation.bottom_bar_navigation.*
import theme.Theme

class BottomConfiguration : TabsNavModel<BottomNavConfiguration>() {

    override val navConfiguration: BottomNavConfiguration
    @Composable
    get() {
        return BottomNavConfiguration(
            backgroundColor = Theme.colors.primaryBackground,
            selectedColor = Theme.colors.primaryTextColor,
            unselectedColor = Theme.colors.hintTextColor
        )
    }
}