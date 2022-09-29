package login.models

data class LoginViewState(
    val email: String,
    val password: String,
    val isSending: Boolean = false,
    val passwordHidden: Boolean = true
)