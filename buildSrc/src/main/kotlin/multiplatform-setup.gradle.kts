plugins {
    id("com.android.library")
    id("org.jetbrains.compose")
    kotlin("multiplatform")
}

kotlin {
    js {
        browser()
    }

    jvm("desktop")

    iosX64()
    iosArm64()
    iosSimulatorArm64()

    androidTarget()

    jvmToolchain(17)

    sourceSets {
        commonMain.dependencies {
            implementation(compose.runtime)
            implementation(compose.foundation)
            implementation(compose.material)
        }
    }
}

android {
    compileSdk = 34
}