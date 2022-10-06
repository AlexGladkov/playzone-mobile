package models

import kotlinx.serialization.Serializable

@Serializable
data class CreateGameInfo(
    val title: String,
    val description: String,
    val size: String,
    val version: String
)
