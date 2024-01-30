package com.mobiledeveloper.playzone

import app.cash.sqldelight.SuspendingTransacter
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.db.SqlSchema
import com.mobiledeveloper.playzone.core.newInstance
import com.mobiledeveloper.playzone.core.schema
import com.mobiledeveloper.playzone.database.GamesQueries
import kotlin.Unit

public interface Database : SuspendingTransacter {
  public val gamesQueries: GamesQueries

  public companion object {
    public val Schema: SqlSchema<QueryResult.AsyncValue<Unit>>
      get() = Database::class.schema

    public operator fun invoke(driver: SqlDriver): Database = Database::class.newInstance(driver)
  }
}
