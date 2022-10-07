package detail.models

sealed class GameDetailEvent {
    object FavoriteClick : GameDetailEvent()
}