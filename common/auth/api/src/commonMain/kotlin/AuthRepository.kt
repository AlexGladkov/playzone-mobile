import models.Token

interface AuthRepository {
    suspend fun login(login: String, password: String): Token
    fun isUserLoggedIn(): Boolean
}