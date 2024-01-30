package navigation

import androidx.compose.material.Text
import home.HomeScreen
import navigation.tabs.*
import ru.alexgladkov.odyssey.compose.extensions.bottomNavigation
import ru.alexgladkov.odyssey.compose.extensions.screen
import ru.alexgladkov.odyssey.compose.extensions.tab
import ru.alexgladkov.odyssey.compose.navigation.RootComposeBuilder
import search.SearchScreen

fun RootComposeBuilder.mainFlow() {
    bottomNavigation(
        name = NavigationTree.Main.Dashboard.name,
        tabsNavModel = BottomConfiguration()
    ) {
        tab(HomeTab()) {
            screen(name = NavigationTree.Main.Home.name) {
                HomeScreen()
            }

            screen(name = NavigationTree.Main.Profile.name) {
                Text("Hello, Profile")
            }
        }

        tab(SearchTab()) {
            screen(name = NavigationTree.Main.Home.name) {
                SearchScreen()
            }
        }

        tab(EventsTab()) {
            screen(name = NavigationTree.Main.Home.name) {

            }
        }

        tab(VideosTab()) {
            screen(name = NavigationTree.Main.Home.name) {

            }
        }
    }
}