package detail.models

data class GameDetailViewState(
    val title: String = "",
    val rating: Float = 0.0f,
    val reviewsCount: String = "",
    val backdrop: String = "",
    val icon: String = "",
    val tags: List<String> = emptyList(),
    val description: String = "",
    val visualContent: List<String> = emptyList(),
    val isFetching: Boolean = true,
)