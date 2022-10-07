package widgets

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import theme.Theme

@Composable
fun TagView(title: String) {
    Box(
        modifier = Modifier.clip(RoundedCornerShape(100.dp))
            .background(Theme.colors.tagColor)
    ) {
        Text(
            modifier = Modifier.padding(horizontal = 10.dp, vertical = 5.dp),
            text = title.uppercase(),
            color = Theme.colors.tagTextColor,
            fontWeight = FontWeight.Light,
            fontSize = 10.sp
        )
    }
}