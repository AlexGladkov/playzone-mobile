package admin.games.models

import models.Game

data class GamesAdminViewState(
    val games: List<Game> = emptyList()
)