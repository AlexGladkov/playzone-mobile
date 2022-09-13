import ktor.KtorAuthRemoteDataSource
import ktor.KtorLoginRequest
import models.Token

class AuthRepositoryImpl(
    private val remoteDataSource: KtorAuthRemoteDataSource
) : AuthRepository {

    override suspend fun login(login: String, password: String): Token {
        return remoteDataSource.performLogin(
            request = KtorLoginRequest(
                login = login,
                password = password
            )
        )
    }
}