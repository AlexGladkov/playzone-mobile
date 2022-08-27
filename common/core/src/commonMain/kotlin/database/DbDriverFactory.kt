package database

import com.squareup.sqldelight.db.SqlDriver
import PlatformConfiguration

expect class DbDriverFactory(platformConfiguration: PlatformConfiguration) {
    fun createDriver(schema: SqlDriver.Schema, name: String): SqlDriver
}