package home

import com.adeo.kviewmodel.BaseSharedViewModel
import home.models.HomeAction
import home.models.HomeEvent
import home.models.HomeViewState

class HomeViewModel : BaseSharedViewModel<HomeViewState, HomeAction, HomeEvent>(
    initialState = HomeViewState(
        username = "Erlink Halah",
        avatarUrl = "https://img.championat.com/news/big/x/g/v-dota-2-vyshel-globalnyj-patch-7-32-s-novym-kripom-i-predmetami_16613015111950108310.jpg"
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