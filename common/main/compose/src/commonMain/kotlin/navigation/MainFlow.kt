package navigation

import events.EventsScreen
import home.HomeScreen
import navigation.tabs.*
import ru.alexgladkov.odyssey.compose.navigation.RootComposeBuilder
import ru.alexgladkov.odyssey.compose.extensions.*
import search.SearchScreen
import streams.StreamsScreen

fun RootComposeBuilder.mainFlow() {
    bottomNavigation(name = NavigationTree.Main.Mobile.Dashboard.name,
        tabsNavModel = BottomConfiguration()
    ) {
        tab(HomeTab()) {
            screen(name = NavigationTree.Main.Mobile.Home.name) {
                HomeScreen()
            }
        }

        tab(SearchTab()) {
            screen(name = NavigationTree.Main.Mobile.Search.name) {
                SearchScreen()
            }
        }

        tab(EventsTab()) {
            screen(name = NavigationTree.Main.Mobile.Events.name) {
                EventsScreen()
            }
        }

        tab(StreamsTab()) {
            screen(name = NavigationTree.Main.Mobile.Streams.name) {
                StreamsScreen()
            }
        }
    }
}