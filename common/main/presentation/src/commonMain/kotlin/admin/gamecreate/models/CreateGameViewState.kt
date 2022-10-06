package admin.gamecreate.models

data class CreateGameViewState(
    val title: String = "",
    val description: String = "",
    val version: String = "",
    val size: String = "",
    val isSending: Boolean = false
)