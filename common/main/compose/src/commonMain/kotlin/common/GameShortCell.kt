package common

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.padding
import androidx.compose.material.Divider
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import models.Game
import theme.Theme

@Composable
fun GameShortCell(model: Game) {
    Column {
        Text(modifier = Modifier.padding(16.dp), text = model.title, color = Theme.colors.secondaryTextColor)
        Divider(modifier = Modifier.padding(start = 16.dp), color = Theme.colors.hintTextColor.copy(alpha = 0.3f))
    }
}