package admin.games

import admin.games.models.GamesAdminAction
import admin.games.models.GamesAdminEvent
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.material.Icon
import androidx.compose.material.Text
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Add
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.adeo.kviewmodel.compose.ViewModel
import com.adeo.kviewmodel.compose.observeAsState
import common.GameShortCell
import navigation.NavigationTree
import ru.alexgladkov.odyssey.compose.extensions.push
import ru.alexgladkov.odyssey.compose.local.LocalRootController
import theme.Theme

@Composable
fun GamesAdminScreen() {
    val rootController = LocalRootController.current

    ViewModel(factory = { GamesAdminViewModel() }) { viewModel ->
        val viewState = viewModel.viewStates().observeAsState().value
        val viewAction = viewModel.viewActions().observeAsState().value

        LazyColumn {
            item {
                Row(modifier = Modifier.padding(16.dp)) {
                    Text(
                        text = "Games List",
                        color = Theme.colors.secondaryTextColor,
                        fontSize = 28.sp,
                        fontWeight = FontWeight.Medium
                    )

                    Spacer(Modifier.weight(1f))

                    Icon(
                        modifier = Modifier.clickable {
                            viewModel.obtainEvent(GamesAdminEvent.CreateGameClicked)
                        },
                        imageVector = Icons.Default.Add,
                        tint = Theme.colors.primaryAction,
                        contentDescription = "Create Game"
                    )
                }
            }

            viewState.games.forEach {
                item {
                    GameShortCell(it)
                }
            }
        }

        when (viewAction) {
            GamesAdminAction.CreateGame -> rootController.push(
                screen = NavigationTree.Desktop.Create.name
            )

            null -> {}
        }
    }
}