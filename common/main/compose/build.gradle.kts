plugins {
    id("multiplatform")
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                implementation(project(":common:main:presentation"))
                implementation(project(":common:core-compose"))
                implementation(project(":common:core-utils"))

                implementation(libs.kviewmodel.core)
                implementation(libs.kviewmodel.compose)
                implementation(libs.kviewmodel.odyssey)

                implementation(libs.odyssey.core)
                implementation(libs.odyssey.compose)
            }
        }

        androidMain {
            dependencies {
                implementation(libs.coil.core)
                implementation(libs.coil.compose)
            }
        }
    }
}

android {
    namespace = "com.mobiledeveloper.playzone.mobile.main.compose"
}