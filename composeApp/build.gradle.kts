plugins {
    id(libs.plugins.android.get().pluginId)
    id(libs.plugins.kotlin.get().pluginId)
    id(libs.plugins.compose.get().pluginId)
}

kotlin {
    jvmToolchain(17)
    androidTarget()

    sourceSets {
        commonMain.dependencies {
            implementation(compose.runtime)
            implementation(compose.ui)
            implementation(compose.foundation)

            implementation(libs.odyssey.compose)
            implementation(libs.odyssey.core)

            implementation(project(":common:core"))
            implementation(project(":common:games:api"))
            implementation(project(":common:umbrella-compose"))
            implementation(project(":common:umbrella-core"))
        }

        androidMain.dependencies {
            implementation(libs.androidx.appcompat)
            implementation(libs.androidx.activity.compose)
        }
    }
}

android {
    namespace = "com.mobiledeveloper.playzone_mobile.android"
    compileSdk = 34
    defaultConfig {
        applicationId = "com.mobiledeveloper.playzone_mobile.android"
        minSdk = libs.versions.mindsdk.get().toInt()
        targetSdk = 34
        versionCode = 1
        versionName = "1.0"
    }

    buildFeatures {
        compose = true
    }

    composeOptions {
        kotlinCompilerExtensionVersion = "1.5.4"
    }

    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}