package sqldelight

import com.mobiledeveloper.playzone.Database
import database.DbDriverFactory

class SqlDelightGamesDataSource(private val driverFactory: DbDriverFactory) {

    suspend fun test() {
        val database = Database(driverFactory.provideDbDriver(Database.Schema))
        database.gamesQueries.selectAll().executeAsList()
    }
}