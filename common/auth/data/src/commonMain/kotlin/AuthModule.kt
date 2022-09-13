import ktor.KtorAuthRemoteDataSource
import org.kodein.di.*

val authModule = DI.Module("authModule") {
    bind<AuthRepository>() with singleton {
        AuthRepositoryImpl(instance())
    }

    bind<KtorAuthRemoteDataSource>() with provider {
        KtorAuthRemoteDataSource(instance())
    }
}