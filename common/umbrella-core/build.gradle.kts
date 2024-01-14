plugins {
    id("multiplatform")
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                implementation(project(":common:core"))
                implementation(project(":common:core-utils"))

                implementation(project(":common:auth:data"))
                implementation(project(":common:games:data"))
                implementation(project(":common:tournaments:data"))

                implementation(libs.kodein.di)
            }
        }
    }
}

android {
    namespace = "com.mobiledeveloper.playzone.mobile.umbrella.core"
}