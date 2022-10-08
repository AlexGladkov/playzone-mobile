package settings

import com.russhwolf.settings.Settings
import io.ktor.client.*
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.singleton

internal val settingsModule = DI.Module("settingsModule") {
    bind<Settings>() with singleton { Settings() }
}