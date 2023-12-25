package com.mobiledeveloper.playzone.mobile

import PlatformConfiguration
import android.app.Application

class PlayzoneApp: Application() {

    override fun onCreate() {
        super.onCreate()

        initPlatformSDK()
    }
}

fun PlayzoneApp.initPlatformSDK() =
    PlatformSDK.init(
        configuration = PlatformConfiguration(androidContext = applicationContext)
    )