import ktor.KtorAuthRemoteDataSource
import org.kodein.di.*
import settings.SettingsAuthDataSource

val authModule = DI.Module("authModule") {
    bind<AuthRepository>() with singleton {
        AuthRepositoryImpl(instance(), instance())
    }

    bind<SettingsAuthDataSource>() with provider {
        SettingsAuthDataSource(instance())
    }

    bind<KtorAuthRemoteDataSource>() with provider {
        KtorAuthRemoteDataSource(instance())
    }
}