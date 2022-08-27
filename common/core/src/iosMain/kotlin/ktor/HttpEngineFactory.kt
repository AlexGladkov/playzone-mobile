package ktor

import io.ktor.client.engine.*
import io.ktor.client.engine.ios.*

internal actual class HttpEngineFactory actual constructor() {
    actual fun createEngine(): HttpClientEngineFactory<HttpClientEngineConfig> = Ios
}