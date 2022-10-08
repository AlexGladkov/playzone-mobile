package home

import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import coil.compose.AsyncImage
import coil.transform.CircleCropTransformation
import home.models.HomeEvent
import home.models.HomeViewState
import theme.Theme

@Composable
fun HomeView(viewState: HomeViewState, eventHandler: (HomeEvent) -> Unit) {
    Row(
        modifier = Modifier.clickable {
            eventHandler.invoke(HomeEvent.UserProfileClicked)
        }.padding(start = 24.dp, end = 24.dp, top = 26.dp)) {
        AsyncImage(
            modifier = Modifier.clip(RoundedCornerShape(28.dp)).size(56.dp),
            model = viewState.avatarUrl,
            contentScale = ContentScale.FillBounds,
            contentDescription = "Avatar"
        )

        Column(modifier = Modifier.padding(start = 20.dp)) {
            Text(
                text = viewState.status,
                color = Theme.colors.secondaryTextColor.copy(alpha = 0.5f),
                fontSize = 12.sp
            )
            Text(
                modifier = Modifier.padding(top = 4.dp),
                text = viewState.username,
                fontWeight = FontWeight.Bold,
                fontSize = 22.sp,
                color = Theme.colors.secondaryTextColor
            )
        }
    }
}
