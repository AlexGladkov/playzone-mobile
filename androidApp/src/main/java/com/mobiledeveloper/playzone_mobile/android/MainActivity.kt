package com.mobiledeveloper.playzone_mobile.android

import GamesRepository
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import di.Inject.instance
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val gamesRepository = instance<GamesRepository>()
        CoroutineScope(context = Dispatchers.IO).launch {
            val games = gamesRepository.searchGame("a")
            withContext(Dispatchers.Main) {
                val tv = findViewById<TextView>(R.id.text_view)
                tv.text = "Title: ${games.size}"
            }
        }
    }
}
