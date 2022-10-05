package models

data class SearchViewState(
    val query: String = "",
    val games: List<Game> = emptyList()
)