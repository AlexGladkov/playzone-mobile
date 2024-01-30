package com.mobiledeveloper.playzone.database

import app.cash.sqldelight.Query
import app.cash.sqldelight.SuspendingTransacterImpl
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.Long
import kotlin.String

public class GamesQueries(
  driver: SqlDriver,
) : SuspendingTransacterImpl(driver) {
  public fun <T : Any> selectAll(mapper: (gameId: Long, title: String) -> T): Query<T> =
      Query(424_605_306, arrayOf("game"), driver, "Games.sq", "selectAll", """
  |SELECT *
  |FROM game
  """.trimMargin()) { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1)!!
    )
  }

  public fun selectAll(): Query<Game> = selectAll { gameId, title ->
    Game(
      gameId,
      title
    )
  }

  public suspend fun insert(gameId: Long?, title: String) {
    driver.execute(-1_113_365_660, """
        |INSERT INTO game(gameId, title)
        |VALUES (?, ?)
        """.trimMargin(), 2) {
          bindLong(0, gameId)
          bindString(1, title)
        }.await()
    notifyQueries(-1_113_365_660) { emit ->
      emit("game")
    }
  }
}
