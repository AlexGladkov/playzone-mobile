package home.models

data class HomeViewState(
    val username: String,
    val avatarUrl: String,
    val status: String = "Morning"
)