plugins {
    id("multiplatform")
    id(libs.plugins.kotlin.get().pluginId)
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                api(libs.kotlinx.serialization.core)
                api(libs.kotlinx.coroutines)

                api(libs.ktor.client.core)
                implementation(libs.ktor.client.serialization)
                implementation(libs.ktor.client.negotiation)
                implementation(libs.ktor.client.logging)
                implementation(libs.ktor.client.json)


                implementation(libs.multiplatform.settings.core)
                implementation(libs.multiplatform.settings.no.arg)

                api(libs.kodein.di)

//                api(libs.sqldelight.sqlite)
            }
        }

        androidMain {
            dependencies {
                implementation(libs.ktor.client.android)
//                implementation(libs.sqldelight.android.driver)
            }
        }

        iosMain {
            dependencies {
                implementation(libs.ktor.client.ios)
//                implementation(libs.sqldelight.native.driver)
            }
        }

//        desktopMain {
//            dependencies {
//                implementation(Dependencies.Ktor.okhttp)
//                implementation(Dependencies.SqlDelight.desktop)
//            }
//        }
    }
}

android {
    namespace = "com.mobiledeveloper.playzone.mobile.core"
}