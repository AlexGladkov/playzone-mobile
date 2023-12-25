plugins {
    alias(libs.plugins.kotlin)
    alias(libs.plugins.compose)
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
//                api(project(":common:auth:api"))
//                api(project(":common:games:api"))
//                api(project(":common:core"))

//                implementation(Dependencies.Other.ViewModel.core)
            }
        }
    }
}