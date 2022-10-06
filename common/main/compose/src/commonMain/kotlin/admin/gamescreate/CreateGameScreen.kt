package admin.gamescreate

import admin.gamecreate.CreateGameViewModel
import admin.gamecreate.models.CreateGameAction
import admin.gamecreate.models.CreateGameEvent
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.adeo.kviewmodel.compose.ViewModel
import com.adeo.kviewmodel.compose.observeAsState
import ru.alexgladkov.odyssey.compose.local.LocalRootController
import theme.Theme
import widgets.ActionButton
import widgets.CommonTextField

@Composable
fun CreateGameScreen() {
    val rootController = LocalRootController.current

    ViewModel(factory = { CreateGameViewModel() }) { viewModel ->
        val viewState = viewModel.viewStates().observeAsState().value
        val viewAction = viewModel.viewActions().observeAsState().value

        Column(modifier = Modifier.padding(16.dp)) {
            Text(
                text = viewState.title.ifBlank { "Add Game" },
                color = Theme.colors.secondaryTextColor,
                fontSize = 28.sp,
                fontWeight = FontWeight.Medium
            )

            Spacer(modifier = Modifier.padding(top = 16.dp))

            CommonTextField(
                value = viewState.title,
                placeholder = "Game Title",
                isSending = viewState.isSending
            ) {
                viewModel.obtainEvent(CreateGameEvent.TitleChanged(it))
            }

            Spacer(modifier = Modifier.padding(top = 16.dp))

            CommonTextField(
                value = viewState.description,
                placeholder = "Game Description",
                isSending = viewState.isSending
            ) {
                viewModel.obtainEvent(CreateGameEvent.DescriptionChanged(it))
            }

            Spacer(modifier = Modifier.padding(top = 16.dp))

            CommonTextField(
                value = viewState.version,
                placeholder = "Game Version",
                isSending = viewState.isSending
            ) {
                viewModel.obtainEvent(CreateGameEvent.VersionChanged(it))
            }

            Spacer(modifier = Modifier.padding(top = 16.dp))

            CommonTextField(
                value = viewState.size,
                placeholder = "Game Size (mb)",
                isSending = viewState.isSending
            ) {
                viewModel.obtainEvent(CreateGameEvent.SizeChanged(it))
            }

            Spacer(modifier = Modifier.padding(top = 16.dp))

            ActionButton(
                title = "Create Game",
                isSending = viewState.isSending
            ) {
                viewModel.obtainEvent(CreateGameEvent.SubmitCreation)
            }
        }

        when (viewAction) {
            is CreateGameAction.CloseScreen -> {
                rootController.popBackStack()
            }

            null -> {}
        }
    }
}