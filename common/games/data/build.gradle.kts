plugins {
    id("multiplatform")
    id(libs.plugins.kotlin.get().pluginId)
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                api(project(":common:games:api"))
                implementation(project(":common:core"))
            }
        }
    }
}

android {
    namespace = "com.mobiledeveloper.playzone.mobile.games.data"
}