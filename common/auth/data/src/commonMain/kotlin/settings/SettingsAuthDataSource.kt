package settings

import com.russhwolf.settings.Settings
import com.russhwolf.settings.get

class SettingsAuthDataSource(
    private val settings: Settings
) {

    fun saveToken(token: String) {
        settings.putString(tokenKey, token)
    }

    fun fetchToken(): String {
        return settings[tokenKey, ""]
    }

    companion object {
        private val tokenKey = "tokenKey"
    }
}