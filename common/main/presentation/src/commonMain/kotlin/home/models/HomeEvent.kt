package home.models

sealed class HomeEvent {
    object UserProfileClicked : HomeEvent()
}