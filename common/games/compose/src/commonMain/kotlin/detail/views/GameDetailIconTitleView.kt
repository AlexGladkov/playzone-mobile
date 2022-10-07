package detail.views

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.ColumnScope
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import theme.Theme

@Composable
fun ColumnScope.GameDetailIconTitleView(
    title: String,
    iconUrl: String
) {
    Row(verticalAlignment = Alignment.Bottom) {
        Box(
            modifier = Modifier.size(88.dp)
                .border(
                    width = 3.dp, color = Theme.colors.secondaryBackground,
                    shape = RoundedCornerShape(13.5.dp)
                )
        )
    }
}