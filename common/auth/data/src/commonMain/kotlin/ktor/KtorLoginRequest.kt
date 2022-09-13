package ktor

import kotlinx.serialization.Serializable

@Serializable
data class KtorLoginRequest(
    val login: String,
    val password: String
)
