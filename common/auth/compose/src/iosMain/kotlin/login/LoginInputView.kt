package login

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.interop.UIKitView
import androidx.compose.ui.unit.dp
import kotlinx.cinterop.ExperimentalForeignApi
import kotlinx.cinterop.ObjCAction
import platform.CoreGraphics.CGRectMake
import platform.UIKit.UIColor
import platform.UIKit.UITextBorderStyle
import platform.UIKit.UITextField
import theme.Theme

@OptIn(ExperimentalForeignApi::class)
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
    Column(modifier = Modifier.background(Theme.colors.primaryBackground)) {
        UIKitView(factory = {
            val textField = object : UITextField(CGRectMake(0.0, 0.0, 0.0, 0.0)) {
                @ObjCAction
                fun editingChanged() {
                    onEmailChanged.invoke(text ?: "")
                }
            }

            textField.layer.masksToBounds = true
            textField.layer.cornerRadius = 4.0
            textField.backgroundColor = UIColor.colorWithRed(
                red = 5.0 / 255.0,
                green = 11.0 / 255.0,
                blue = 24.0 / 255.0,
                alpha = 100.0
            )
            textField.placeholder = "Email"
            textField.textColor = UIColor.whiteColor
            textField.borderStyle = UITextBorderStyle.UITextBorderStyleNone
            textField.clipsToBounds = true
            textField
        },
            modifier = Modifier
                .clip(RoundedCornerShape(6.dp))
                .fillMaxWidth()
                .height(40.dp),
            update = { textField ->
                textField.text = email
            }
        )

        Spacer(modifier = Modifier.height(24.dp))

        UIKitView(factory = {
            val textField = object : UITextField(CGRectMake(0.0, 0.0, 0.0, 0.0)) {
                @ObjCAction
                fun editingChanged() {
                    onPasswordChanged.invoke(text ?: "")
                }
            }

            textField.layer.masksToBounds = true
            textField.layer.cornerRadius = 4.0
            textField.backgroundColor = UIColor.colorWithRed(
                red = 5.0 / 255.0,
                green = 11.0 / 255.0,
                blue = 24.0 / 255.0,
                alpha = 100.0
            )
            textField.placeholder = "Password"
            textField.textColor = UIColor.whiteColor
            textField.borderStyle = UITextBorderStyle.UITextBorderStyleNone
            textField.clipsToBounds = true
            textField
        },
            modifier = Modifier.background(Theme.colors.primaryBackground)
                .clip(RoundedCornerShape(6.dp))
                .fillMaxWidth()
                .height(40.dp),
            update = { textField ->
                textField.text = email
            }
        )
    }
}