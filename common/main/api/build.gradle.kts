plugins {
    id("multiplatform")
    id(libs.plugins.kotlin.get().pluginId)
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
//                implementation()
            }
        }
    }
}

android {
    namespace = "com.mobiledeveloper.playzone.mobile.main.api"
}