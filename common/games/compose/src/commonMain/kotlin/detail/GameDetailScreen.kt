package detail

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import com.adeo.kviewmodel.compose.observeAsState
import com.adeo.kviewmodel.odyssey.StoredViewModel
import detail.models.GameDetailViewState
import detail.views.GameDetailIconTitleView

@Composable
fun GameDetailScreen() {
    StoredViewModel({ GameDetailViewModel() }) { viewModel ->
        val viewState = viewModel.viewStates().observeAsState()
        val viewAction = viewModel.viewActions().observeAsState()

        GameDetailView(viewState.value)
    }
}

private fun GameDetailView(
    viewState: GameDetailViewState
) {
    Box(
        modifier = Modifier.fillMaxWidth().height(308.dp)
            .background(Color.Gray)
    ) {
        Column {
            Spacer(modifier = Modifier.padding(top = 230.dp))
            GameDetailIconTitleView()
        }
    }
}