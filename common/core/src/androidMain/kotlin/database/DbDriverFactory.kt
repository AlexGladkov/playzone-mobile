package database

import PlatformConfiguration
import app.cash.sqldelight.async.coroutines.synchronous
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.db.SqlSchema
import app.cash.sqldelight.driver.android.AndroidSqliteDriver
import com.mobiledeveloper.playzone.Database

actual class DbDriverFactory actual constructor(private val platformConfiguration: PlatformConfiguration) {

    actual suspend fun provideDbDriver(
        schema: SqlSchema<QueryResult.AsyncValue<Unit>>,
        name: String
    ): SqlDriver {
        return AndroidSqliteDriver(schema.synchronous(), platformConfiguration.androidContext, name)
    }
}