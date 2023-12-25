import org.jetbrains.kotlin.gradle.dsl.KotlinMultiplatformExtension

plugins {
    alias(libs.plugins.kotlin)
    alias(libs.plugins.android)
//    kotlin("plugin.serialization")
}

kotlin {
    defaultTargetsSetup()

    sourceSets {
        commonMain {
            dependencies {
//                implementation(Dependencies.Kotlin.Serialization.serialization)
            }
        }
    }
}

fun KotlinMultiplatformExtension.defaultTargetsSetup() {
    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = "17"
            }
        }
    }
}

android {
    namespace = "com.mobiledeveloper.playzone.mobile.auth.api"
}