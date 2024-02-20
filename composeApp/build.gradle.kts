import org.jetbrains.compose.desktop.application.dsl.TargetFormat
import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

plugins {
    id(libs.plugins.android.get().pluginId)
    id(libs.plugins.kotlin.get().pluginId)
    id(libs.plugins.compose.get().pluginId)
    id(libs.plugins.cocoapods.get().pluginId)
}

version = "0.0.1"

kotlin {
    jvmToolchain(17)
    androidTarget()
    jvm()

    js {
        moduleName = "composeApp"
        browser {
            commonWebpackConfig {
                outputFileName = "composeApp.js"
            }
        }
        binaries.executable()
    }

    listOf(
        iosArm64(),
        iosX64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "ComposeApp"
            isStatic = false
            linkerOpts.add("-lsqlite3")
        }
    }

    cocoapods {
        summary = "PlayZone iOS SDK"
        homepage = "https://google.com"
        ios.deploymentTarget = "14.0"

        framework {
            transitiveExport = false
            baseName = "SharedSDK"
            export(projects.common.core)
            export(projects.common.coreUtils)
            export(projects.common.auth.api)
            export(projects.common.auth.presentation)
            export(projects.common.games.api)
            export(projects.common.main.api)
            export(projects.common.main.presentation)
            export(projects.common.umbrellaCore)
        }
    }

    targets.withType<KotlinNativeTarget> {
        binaries {
            all {
                linkerOpts("-lsqlite3")
            }
        }
    }

    sourceSets {
        commonMain.dependencies {
            implementation(compose.runtime)
            implementation(compose.ui)
            implementation(compose.foundation)
            implementation(compose.material)

            implementation(libs.odyssey.compose)
            implementation(libs.odyssey.core)

            implementation(libs.kviewmodel.core)
            implementation(libs.kviewmodel.compose)
            implementation(libs.kviewmodel.odyssey)

            implementation(projects.common.core)
            implementation(projects.common.coreCompose)
            implementation(projects.common.coreUtils)
            implementation(projects.common.auth.compose)
            implementation(projects.common.main.compose)
            implementation(projects.common.games.api)
            implementation(projects.common.umbrellaCore)
        }

        jvmMain.dependencies {
            implementation(compose.desktop.currentOs)
        }

        androidMain.dependencies {
            implementation(libs.androidx.appcompat)
            implementation(libs.androidx.activity.compose)
        }

        iosMain.dependencies {
            api(projects.common.core)
            api(projects.common.coreUtils)
            api(projects.common.auth.api)
            api(projects.common.auth.presentation)
            api(projects.common.games.api)
            api(projects.common.main.api)
            api(projects.common.main.presentation)
            api(projects.common.umbrellaCore)
        }

        jsMain.dependencies {
            implementation(compose.html.core)
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

compose.desktop {
    application {
        mainClass = "Main_desktopKt"

        nativeDistributions {
            targetFormats(TargetFormat.Dmg, TargetFormat.Exe, TargetFormat.Deb)
            packageName = "com.mobiledeveloper.playzone.mobile.desktopApp"
            packageVersion = "1.0.0"
        }
    }
}

compose.experimental {
    web.application {}
}