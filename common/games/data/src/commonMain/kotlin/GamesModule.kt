import ktor.KtorGamesDataSource
import org.kodein.di.*
import sqldelight.SqlDelightGamesDataSource

val gamesModule = DI.Module("gamesModule") {
    bind<KtorGamesDataSource>() with provider {
        KtorGamesDataSource(instance())
    }

    bind<SqlDelightGamesDataSource>() with provider {
        SqlDelightGamesDataSource()
    }

    bind<GamesRepository>() with singleton {
        GamesRepositoryImpl(instance(), instance())
    }
}