plugins {
    id("multiplatform-setup")
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                api(project(":common:auth:api"))
                api(project(":common:games:api"))
                api(project(":common:core"))

                implementation(libs.kviewmodel.core)
            }
        }
    }
}

android {
    namespace ="com.mobiledeveloper.playzone_mobile.auth.presentation"
}