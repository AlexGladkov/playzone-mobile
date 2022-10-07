plugins {
    id("multiplatform-compose-setup")
    id("android-setup")
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                implementation(project(":common:core-utils"))
                implementation(project(":common:core-compose"))
                implementation(project(":common:core"))
                implementation(project(":common:games:presentation"))

                implementation(Dependencies.Other.ViewModel.core)
                implementation(Dependencies.Other.ViewModel.compose)
                implementation(Dependencies.Other.ViewModel.odyssey)
            }
        }
    }
}