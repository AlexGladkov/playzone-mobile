package admin.games.models

sealed class GamesAdminEvent {
    object CreateGameClicked : GamesAdminEvent()
}