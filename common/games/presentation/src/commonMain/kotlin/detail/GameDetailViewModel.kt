package detail

import com.adeo.kviewmodel.BaseSharedViewModel
import detail.models.GameDetailAction
import detail.models.GameDetailEvent
import detail.models.GameDetailViewState

class GameDetailViewModel : BaseSharedViewModel<GameDetailViewState, GameDetailAction, GameDetailEvent>(
    initialState = GameDetailViewState()
) {

    init {
        fetchGameDetail()
    }

    override fun obtainEvent(viewEvent: GameDetailEvent) {
        when (viewEvent) {
            GameDetailEvent.FavoriteClick -> switchFavorite()
        }
    }

    private fun fetchGameDetail() {
        viewState = viewState.copy(
            title = "DoTA 2",
            rating = 5.0f,
            reviewsCount = "70M",
            tags = listOf("Moba", "Multiplayer", "Strategy"),
            description = "Dota 2 is a multiplayer online battle arena (MOBA) game which has two teams of five players compete to collectively destroy a large structure defended by the opposing team known as the \"Ancient\", whilst defending their own.",
            backdrop = "https://cdn.cloudflare.steamstatic.com/steam/apps/570/capsule_616x353.jpg?t=1662588548",
            icon = "https://cdn1.ozone.ru/s3/multimedia-n/6184130159.jpg",
        )
    }

    private fun switchFavorite() {

    }
}