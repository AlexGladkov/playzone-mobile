import ktor.KtorAuthRemoteDataSource
import ktor.KtorLoginRequest
import models.Token
import settings.SettingsAuthDataSource

class AuthRepositoryImpl(
    private val remoteDataSource: KtorAuthRemoteDataSource,
    private val localDataSource: SettingsAuthDataSource
) : AuthRepository {

    override suspend fun login(login: String, password: String): Token {
        val token = remoteDataSource.performLogin(
            request = KtorLoginRequest(
                login = login,
                password = password
            )
        )

        localDataSource.storeTokenInSettings(token.token)
        return token
    }

    override fun isUserLoggedIn(): Boolean {
        return localDataSource.fetchToken().isNotBlank()
    }
}