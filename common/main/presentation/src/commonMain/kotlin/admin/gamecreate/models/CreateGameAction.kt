package admin.gamecreate.models

sealed class CreateGameAction {
    object CloseScreen : CreateGameAction()
}