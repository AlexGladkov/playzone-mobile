package settings

import com.russhwolf.settings.Settings

class SettingsAuthDataSource(
    private val settings: Settings
) {

    fun storeTokenInSettings(token: String) {
        settings.putString(TOKEN_KEY, token)
    }

    fun fetchToken(): String {
        return settings.getString(TOKEN_KEY, "")
    }

    companion object {
        private const val TOKEN_KEY = "TokenKey"
    }
}