package login

import androidx.compose.runtime.Composable

@Composable
expect fun LoginInputView(
    email: String,
    password: String,
    isSending: Boolean,
    isPasswordHidden: Boolean,
    onEmailChanged: (String) -> Unit,
    onPasswordChanged: (String) -> Unit,
    onShowPasswordClicked: () -> Unit
)