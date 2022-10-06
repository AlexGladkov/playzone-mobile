package login

import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.*
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.outlined.Clear
import androidx.compose.material.icons.outlined.Lock
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.input.PasswordVisualTransformation
import androidx.compose.ui.text.input.VisualTransformation
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.adeo.kviewmodel.compose.observeAsState
import com.adeo.kviewmodel.odyssey.StoredViewModel
import login.models.LoginAction
import login.models.LoginEvent
import navigation.NavigationTree
import ru.alexgladkov.odyssey.compose.extensions.present
import ru.alexgladkov.odyssey.compose.extensions.push
import ru.alexgladkov.odyssey.compose.local.LocalRootController
import ru.alexgladkov.odyssey.core.LaunchFlag
import theme.Theme
import widgets.ActionButton
import widgets.CommonTextField

@Composable
fun LoginScreen() {
    val rootController = LocalRootController.current

    StoredViewModel(factory = { LoginViewModel() }) { viewModel ->
        val state = viewModel.viewStates().observeAsState()
        val action = viewModel.viewActions().observeAsState()

        Column(
            modifier = Modifier.padding(30.dp),
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
            Text(
                text = "Login Now", color = Theme.colors.thirdTextColor,
                fontSize = 24.sp, fontWeight = FontWeight.Bold
            )

            Text(
                modifier = Modifier.padding(top = 15.dp),
                text = "Welcome back to PlayZone! Enter your email address and your password to enjoy the latest features of PlayZone",
                fontSize = 14.sp,
                textAlign = TextAlign.Center,
                color = Theme.colors.hintTextColor
            )

            Spacer(modifier = Modifier.height(50.dp))

            CommonTextField(
                value = state.value.email,
                placeholder = "Your Login",
                isSending = state.value.isSending
            ) {
                viewModel.obtainEvent(LoginEvent.EmailChanged(it))
            }

            Spacer(modifier = Modifier.height(24.dp))

            CommonTextField(
                value = state.value.password,
                placeholder = "Your Password",
                isSending = state.value.isSending,
                isTextHidden = state.value.passwordHidden,
                trailingIcon = {
                    Icon(
                        modifier = Modifier.clickable {
                            viewModel.obtainEvent(LoginEvent.PasswordShowClick)
                        },
                        imageVector = if (state.value.passwordHidden) {
                            Icons.Outlined.Clear
                        } else {
                            Icons.Outlined.Lock
                        },
                        contentDescription = "Password hidden",
                        tint = Theme.colors.hintTextColor
                    )
                }
            ) {
                viewModel.obtainEvent(LoginEvent.PasswordChanged(it))
            }

            Spacer(modifier = Modifier.height(84.dp))

            ActionButton(title = "Login Now", isSending = state.value.isSending) {
                viewModel.obtainEvent(LoginEvent.LoginClick)
            }
        }

        when (action.value) {
            is LoginAction.OpenMainFlow -> rootController.findRootController().present(
                screen = NavigationTree.Main.Dashboard.name,
                launchFlag = LaunchFlag.SingleNewTask
            )

            is LoginAction.OpenRegistrationScreen -> rootController.push(NavigationTree.Auth.Register.name)
            is LoginAction.OpenForgotPasswordScreen -> rootController.push(NavigationTree.Auth.Forgot.name)
            null -> { }
        }
    }
}