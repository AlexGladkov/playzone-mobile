package models

sealed class SearchEvent {
    data class QueryChanged(val query: String) : SearchEvent()
    data class GameClicked(val game: Game) : SearchEvent()
}