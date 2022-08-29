package navigation

import forgot.ForgotScreen
import login.LoginScreen
import register.RegisterScreen
import ru.alexgladkov.odyssey.compose.extensions.flow
import ru.alexgladkov.odyssey.compose.extensions.screen
import ru.alexgladkov.odyssey.compose.navigation.RootComposeBuilder

fun RootComposeBuilder.authFlow() {
    flow(name = NavigationTree.Auth.AuthFlow.name) {
        screen(name = NavigationTree.Auth.Login.name) {
            LoginScreen()
        }

        screen(name = NavigationTree.Auth.Register.name) {
            RegisterScreen()
        }

        screen(name = NavigationTree.Auth.Forgot.name) {
            ForgotScreen()
        }
    }
}