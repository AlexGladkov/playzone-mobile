plugins {
    id("multiplatform-setup")
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                implementation(project(":common:auth:presentation"))
                implementation(project(":common:core-compose"))
                implementation(project(":common:core-utils"))

                implementation(libs.kviewmodel.core)
                implementation(libs.kviewmodel.compose)
                implementation(libs.kviewmodel.odyssey)

                implementation(libs.odyssey.core)
                implementation(libs.odyssey.compose)
            }
        }
    }
}

android {
    namespace ="com.mobiledeveloper.playzone_mobile.auth.compose"
}