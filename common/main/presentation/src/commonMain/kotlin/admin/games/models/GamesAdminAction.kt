package admin.games.models

sealed class GamesAdminAction {
    object CreateGame : GamesAdminAction()
}