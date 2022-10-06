package com.mobiledeveloper.playzone_mobile.android

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import navigation.setupThemedNavigation

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setupThemedNavigation()
    }
}

