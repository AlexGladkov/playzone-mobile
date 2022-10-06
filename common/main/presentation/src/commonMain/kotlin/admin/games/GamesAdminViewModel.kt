package admin.games

import GamesRepository
import admin.games.models.GamesAdminAction
import admin.games.models.GamesAdminEvent
import admin.games.models.GamesAdminViewState
import com.adeo.kviewmodel.BaseSharedViewModel
import di.Inject
import kotlinx.coroutines.launch

class GamesAdminViewModel : BaseSharedViewModel<GamesAdminViewState, GamesAdminAction, GamesAdminEvent>(
    initialState = GamesAdminViewState()
) {

    private val gamesRepository: GamesRepository = Inject.instance()

    init {
        fetchGames()
    }

    override fun obtainEvent(viewEvent: GamesAdminEvent) {
        when (viewEvent) {
            GamesAdminEvent.CreateGameClicked -> openCreateGameScreen()
        }
    }

    private fun openCreateGameScreen() {
        // Place for analytics for example
        viewAction = GamesAdminAction.CreateGame
    }

    private fun fetchGames() {
        viewModelScope.launch {
            viewState = try {
                val games = gamesRepository.fetchAllGames()
                GamesAdminViewState(games = games)
            } catch (e: Exception) {
                GamesAdminViewState()
            }
        }
    }
}