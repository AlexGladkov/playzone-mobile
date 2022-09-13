package ktor

import io.ktor.client.*
import io.ktor.client.call.*
import io.ktor.client.request.*
import io.ktor.http.*
import models.Token

class KtorAuthRemoteDataSource(
    private val httpClient: HttpClient
) {

    suspend fun performLogin(request: KtorLoginRequest): Token {
        return httpClient.post {
            url {
                path("login")
                setBody(request)
            }
        }.body()
    }
}