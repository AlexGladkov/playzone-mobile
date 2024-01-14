plugins {
    id("multiplatform")
    id(libs.plugins.serialization.get().pluginId)
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                implementation(libs.kotlinx.serialization.core)
            }
        }
    }
}

android {
    namespace = "com.mobiledeveloper.playzone.mobile.auth.api"
}