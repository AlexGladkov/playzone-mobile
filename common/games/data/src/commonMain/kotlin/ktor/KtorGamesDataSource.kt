package ktor

import io.ktor.client.*
import io.ktor.client.call.*
import io.ktor.client.request.*
import io.ktor.http.*
import ktor.models.KtorSearchGame
import ktor.models.KtorSearchRequest
import models.CreateGameInfo
import models.Game

class KtorGamesDataSource(private val httpClient: HttpClient) {
    suspend fun fetchAllGames(): List<KtorSearchGame> {
        return httpClient.post {
            header("Bearer-Authorization", "2bac6ef1-ca6d-42ca-96f3-923c68e88eca")

            url {
                path("games/search")
                setBody(KtorSearchRequest(searchQuery = ""))
            }
        }.body()
    }

    suspend fun searchGame(query: String): List<KtorSearchGame> {
        return httpClient.post {
            header("Bearer-Authorization", "2bac6ef1-ca6d-42ca-96f3-923c68e88eca")

            url {
                path("games/search")
                setBody(KtorSearchRequest(searchQuery = query))
            }
        }.body()
    }

    suspend fun createGame(info: CreateGameInfo, token: String) {
        return httpClient.post {
            header("Bearer-Authorization", token)

            url {
                path("games/create")
                setBody(info)
            }
        }.body()
    }
}