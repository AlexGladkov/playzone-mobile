package search

import GamesRepository
import com.adeo.kviewmodel.BaseSharedViewModel
import di.Inject
import kotlinx.coroutines.Job
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch
import search.models.SearchAction
import search.models.SearchEvent
import search.models.SearchViewState

class SearchViewModel : BaseSharedViewModel<SearchViewState, SearchAction, SearchEvent>(
    initialState = SearchViewState()
) {

    private val gamesRepository: GamesRepository = Inject.instance()
    private var searchJob: Job? = null

    override fun obtainEvent(viewEvent: SearchEvent) {
        when (viewEvent) {
            is SearchEvent.GameClicked -> presentDetailedGame()
            is SearchEvent.QueryChanged -> searchGame(query = viewEvent.query)
        }
    }

    private fun presentDetailedGame() {
        
    }

    private fun searchGame(query: String) {
        searchJob = viewModelScope.launch {
            searchJob?.cancel()
            delay(400)
            viewState = try {
                val gamesResponse = gamesRepository.searchGame(query = query)
                viewState.copy(games = gamesResponse)
            } catch (e: Exception) {
                viewState.copy(games = emptyList())
            }
        }
    }
}