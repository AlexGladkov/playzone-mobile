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

            implementation(project(":common:core"))
            implementation(project(":common:core-compose"))
            implementation(project(":common:core-utils"))
            implementation(project(":common:auth:compose"))
            implementation(project(":common:main:compose"))
            implementation(project(":common:games:api"))
            implementation(project(":common:umbrella-core"))
        }

        jvmMain.dependencies {
            implementation(compose.desktop.currentOs)
        }

        androidMain.dependencies {
            implementation(libs.androidx.appcompat)
            implementation(libs.androidx.activity.compose)
        }

        iosMain.dependencies {
            api(project(":common:core"))
            api(project(":common:core-utils"))
            api(project(":common:auth:api"))
            api(project(":common:auth:presentation"))
            api(project(":common:games:api"))
            api(project(":common:main:api"))
            api(project(":common:main:presentation"))
            api(project(":common:umbrella-core"))
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