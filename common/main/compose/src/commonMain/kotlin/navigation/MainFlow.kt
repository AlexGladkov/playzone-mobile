package navigation

import events.EventsScreen
import home.HomeScreen
import navigation.tabs.*
import ru.alexgladkov.odyssey.compose.navigation.RootComposeBuilder
import ru.alexgladkov.odyssey.compose.extensions.*
import search.SearchScreen
import streams.StreamsScreen

fun RootComposeBuilder.mainFlow() {
    bottomNavigation(name = NavigationTree.Main.Dashboard.name,
        tabsNavModel = BottomConfiguration()
    ) {
        tab(HomeTab()) {
            screen(name = NavigationTree.Main.Home.name) {
                HomeScreen()
            }
        }

        tab(SearchTab()) {
            screen(name = NavigationTree.Main.Search.name) {
                SearchScreen()
            }
        }

        tab(EventsTab()) {
            screen(name = NavigationTree.Main.Events.name) {
                EventsScreen()
            }
        }

        tab(StreamsTab()) {
            screen(name = NavigationTree.Main.Streams.name) {
                StreamsScreen()
            }
        }
    }
}