import org.jetbrains.compose.desktop.application.dsl.TargetFormat

plugins {
    id(libs.plugins.android.get().pluginId)
    id(libs.plugins.kotlin.get().pluginId)
    id(libs.plugins.compose.get().pluginId)
    kotlin("native.cocoapods")
}

version = "0.0.2"

kotlin {
    androidTarget()
    jvm()

    js {
        browser()
        binaries.executable()
    }

    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "ComposeApp"
            isStatic = true
        }
    }

    cocoapods {
        summary = "PlayZone iOS SDK"
        homepage = "https://google.com"
        ios.deploymentTarget = "14.0"
        podfile = project.file("../iosApp/Podfile")

        framework {
            transitiveExport = false
            baseName = "SharedSDK"
            export(project(":common:core"))
            export(project(":common:core-utils"))
            export(project(":common:auth:api"))
            export(project(":common:auth:presentation"))
            export(project(":common:games:api"))
            export(project(":common:main:api"))
            export(project(":common:main:presentation"))
            export(project(":common:umbrella-core"))
        }
    }

    sourceSets {

        commonMain.dependencies {
            implementation(compose.runtime)
            implementation(compose.ui)
            implementation(compose.foundation)

            implementation(libs.odyssey.compose)
            implementation(libs.odyssey.core)

            implementation(project(":common:core"))
            implementation(project(":common:core-compose"))
            implementation(project(":common:games:api"))
            implementation(project(":common:umbrella-compose"))
            implementation(project(":common:umbrella-core"))
        }

        jvmMain.dependencies {
            implementation(compose.desktop.currentOs)
        }

        androidMain.dependencies {
            implementation(libs.androidx.appcompat)
            implementation(libs.androidx.activity.compose)
        }
    }
}

android {
    namespace = "com.mobiledeveloper.playzone.mobile"
    compileSdk = 34

    defaultConfig {
        minSdk = 24
        targetSdk = 34

        applicationId = "com.mobiledeveloper.playzone.mobile.androidApp"
        versionCode = 1
        versionName = "1.0.0"
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    buildFeatures {
        compose = true
    }

    composeOptions {
        kotlinCompilerExtensionVersion = "1.5.4"
    }
}

compose.desktop {
    application {
        mainClass = "Main_desktopKt"

        nativeDistributions {
            targetFormats(TargetFormat.Dmg, TargetFormat.Msi, TargetFormat.Deb)
            packageName = "com.mobiledeveloper.playzone.mobile.desktopApp"
            packageVersion = "1.0.0"
        }
    }
}

compose.experimental {
    web.application {}
}