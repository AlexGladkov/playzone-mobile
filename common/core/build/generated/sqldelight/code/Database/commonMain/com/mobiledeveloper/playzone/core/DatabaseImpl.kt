package com.mobiledeveloper.playzone.core

import app.cash.sqldelight.SuspendingTransacterImpl
import app.cash.sqldelight.db.AfterVersion
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.db.SqlSchema
import com.mobiledeveloper.playzone.Database
import com.mobiledeveloper.playzone.database.GamesQueries
import kotlin.Long
import kotlin.Unit
import kotlin.reflect.KClass

internal val KClass<Database>.schema: SqlSchema<QueryResult.AsyncValue<Unit>>
  get() = DatabaseImpl.Schema

internal fun KClass<Database>.newInstance(driver: SqlDriver): Database = DatabaseImpl(driver)

private class DatabaseImpl(
  driver: SqlDriver,
) : SuspendingTransacterImpl(driver), Database {
  override val gamesQueries: GamesQueries = GamesQueries(driver)

  public object Schema : SqlSchema<QueryResult.AsyncValue<Unit>> {
    override val version: Long
      get() = 1

    override fun create(driver: SqlDriver): QueryResult.AsyncValue<Unit> = QueryResult.AsyncValue {
      driver.execute(null, """
          |CREATE TABLE game (
          |    gameId INTEGER PRIMARY KEY NOT NULL,
          |    title TEXT NOT NULL
          |)
          """.trimMargin(), 0).await()
    }

    override fun migrate(
      driver: SqlDriver,
      oldVersion: Long,
      newVersion: Long,
      vararg callbacks: AfterVersion,
    ): QueryResult.AsyncValue<Unit> = QueryResult.AsyncValue {
    }
  }
}
