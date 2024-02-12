package login

import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Icon
import androidx.compose.material.Text
import androidx.compose.material.TextField
import androidx.compose.material.TextFieldDefaults
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.outlined.Clear
import androidx.compose.material.icons.outlined.Lock
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.input.PasswordVisualTransformation
import androidx.compose.ui.text.input.VisualTransformation
import androidx.compose.ui.unit.dp
import theme.Theme

@Composable
actual fun LoginInputView(
    email: String,
    password: String,
    isSending: Boolean,
    isPasswordHidden: Boolean,
    onEmailChanged: (String) -> Unit,
    onPasswordChanged: (String) -> Unit,
    onShowPasswordClicked: () -> Unit
) {
    TextField(
        modifier = Modifier
            .fillMaxWidth()
            .height(56.dp),
        value = email,
        enabled = !isSending,
        colors = TextFieldDefaults.textFieldColors(
            backgroundColor = Color(0xFF1F2430),
            textColor = Color(0xFF696C75),
            cursorColor = Theme.colors.highlightTextColor,
            focusedIndicatorColor = Color.Transparent,
            unfocusedIndicatorColor = Color.Transparent
        ),
        placeholder = { Text("Your login", color = Theme.colors.hintTextColor) },
        shape = RoundedCornerShape(10.dp),
        onValueChange = {
            onEmailChanged.invoke(it)
        })

    Spacer(modifier = Modifier.height(24.dp))

    TextField(
        modifier = Modifier
            .fillMaxWidth()
            .height(56.dp),
        value = password,
        enabled = !isSending,
        colors = TextFieldDefaults.textFieldColors(
            backgroundColor = Color(0xFF1F2430),
            textColor = Color(0xFF696C75),
            cursorColor = Theme.colors.highlightTextColor,
            focusedIndicatorColor = Color.Transparent,
            unfocusedIndicatorColor = Color.Transparent
        ),
        visualTransformation = if (isPasswordHidden) {
            PasswordVisualTransformation()
        } else {
            VisualTransformation.None
        },
        placeholder = {
            Text("Your password", color = Theme.colors.hintTextColor)
        },
        trailingIcon = {
            Icon(
                modifier = Modifier.clickable {
                    onShowPasswordClicked()
                },
                imageVector = if (isPasswordHidden) {
                    Icons.Outlined.Clear
                } else {
                    Icons.Outlined.Lock
                },
                contentDescription = "Password hidden",
                tint = Theme.colors.hintTextColor
            )
        },
        shape = RoundedCornerShape(10.dp),
        onValueChange = {
            onPasswordChanged(it)
        })
}