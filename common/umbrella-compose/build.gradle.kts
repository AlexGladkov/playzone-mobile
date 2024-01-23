plugins {
    id("multiplatform-setup")
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                implementation(project(":common:core"))
                implementation(project(":common:core-compose"))
                implementation(project(":common:core-utils"))

                implementation(project(":common:auth:data"))
                implementation(project(":common:auth:compose"))
                implementation(project(":common:main:compose"))
                implementation(project(":common:games:data"))
                implementation(project(":common:tournaments:data"))

                implementation(libs.kviewmodel.core)
                implementation(libs.kviewmodel.compose)
                implementation(libs.kviewmodel.odyssey)

                implementation(libs.odyssey.core)
                implementation(libs.odyssey.compose)
            }
        }

        androidMain {
            dependencies {
                implementation(project(":common:core-compose"))
                implementation(libs.androidx.activity.compose)
            }
        }
    }
}

android {
    namespace ="com.mobiledeveloper.playzone_mobile.umbrella.compose"
}