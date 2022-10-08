package home

import com.adeo.kviewmodel.BaseSharedViewModel
import home.models.HomeAction
import home.models.HomeEvent
import home.models.HomeViewState

class HomeViewModel : BaseSharedViewModel<HomeViewState, HomeAction, HomeEvent>(
    initialState = HomeViewState(
        username = "Erlink Halah",
        avatarUrl = "https://static01.nyt.com/images/2022/09/16/arts/16CAMERON2/merlin_32238772_5ba78554-6e17-4091-b4cb-5b78d64086de-mobileMasterAt3x.jpg"
    )
) {
    override fun obtainEvent(viewEvent: HomeEvent) {
        when (viewEvent) {
            HomeEvent.UserProfileClicked -> showUserProfile()
        }
    }

    private fun showUserProfile() {
        viewAction = HomeAction.ShowUserProfile
    }
}