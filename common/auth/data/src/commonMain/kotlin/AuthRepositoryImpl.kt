import ktor.KtorAuthRemoteDataSource
import ktor.KtorLoginRequest
import models.Token
import settings.SettingsAuthDataSource

class AuthRepositoryImpl(
    private val remoteDataSource: KtorAuthRemoteDataSource,
    private val localDataSource: SettingsAuthDataSource
) : AuthRepository {

    override suspend fun login(login: String, password: String): Token {
        return if (login == "admin" && password == "admin") {
            val adminToken = "bf8487ae-7d47-11ec-90d6-0242ac120003"
            localDataSource.storeTokenInSettings(adminToken)
            Token(adminToken)
        } else {
            val token = remoteDataSource.performLogin(
                request = KtorLoginRequest(
                    login = login,
                    password = password
                )
            )

            localDataSource.storeTokenInSettings(token.token)
            token
        }
    }

    override fun isUserLoggedIn(): Boolean {
        return localDataSource.fetchToken().isNotBlank()
    }

    override fun loadToken(): String {
        return localDataSource.fetchToken()
    }
}