plugins {
    id("multiplatform-setup")
    id(libs.plugins.serialization.get().pluginId)
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                implementation(project(":common:auth:api"))
                implementation(project(":common:core"))

                implementation(libs.kodein.di)
                implementation(libs.multiplatform.settings.core)
            }
        }
    }
}

android {
    namespace ="com.mobiledeveloper.playzone_mobile.auth.data"
}