plugins {
    id("multiplatform-setup")
    id("android-setup")
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                api(project(":common:auth:api"))

                implementation(Dependencies.Other.ViewModel.core)
            }
        }
    }
}