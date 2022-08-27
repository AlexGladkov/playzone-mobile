package ktor.models

import kotlinx.serialization.Serializable

@Serializable
data class KtorSearchRequest(
    val searchQuery: String
)