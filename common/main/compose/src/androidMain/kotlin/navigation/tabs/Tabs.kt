package navigation.tabs

import androidx.compose.runtime.Composable
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.sp
import ru.alexgladkov.odyssey.compose.navigation.bottom_bar_navigation.TabConfiguration
import ru.alexgladkov.odyssey.compose.navigation.bottom_bar_navigation.TabItem
import theme.Theme

class HomeTab: TabItem() {
    override val configuration: TabConfiguration
        @Composable
        get() {
            return TabConfiguration(
                title = "Home",
                selectedColor = Theme.colors.primaryAction,
                unselectedColor = Theme.colors.hintTextColor,
                titleStyle = TextStyle(
                    fontSize = 14.sp,
                    fontWeight = FontWeight.Medium
                )
            )
        }
}

class SearchTab: TabItem() {
    override val configuration: TabConfiguration
        @Composable
        get() {
            return TabConfiguration(
                title = "Search",
                selectedColor = Theme.colors.primaryAction,
                unselectedColor = Theme.colors.hintTextColor,
                titleStyle = TextStyle(
                    fontSize = 14.sp,
                    fontWeight = FontWeight.Medium
                )
            )
        }
}

class EventsTab: TabItem() {
    override val configuration: TabConfiguration
        @Composable
        get() {
            return TabConfiguration(
                title = "Events",
                selectedColor = Theme.colors.primaryAction,
                unselectedColor = Theme.colors.hintTextColor,
                titleStyle = TextStyle(
                    fontSize = 14.sp,
                    fontWeight = FontWeight.Medium
                )
            )
        }
}

class VideosTab: TabItem() {
    override val configuration: TabConfiguration
        @Composable
        get() {
            return TabConfiguration(
                title = "Videos",
                selectedColor = Theme.colors.primaryAction,
                unselectedColor = Theme.colors.hintTextColor,
                titleStyle = TextStyle(
                    fontSize = 14.sp,
                    fontWeight = FontWeight.Medium
                )
            )
        }
}
