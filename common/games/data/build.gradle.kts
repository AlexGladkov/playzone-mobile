plugins {
    id("multiplatform-setup")
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                api(project(":common:games:api"))
                implementation(project(":common:core"))
            }
        }
    }
}

android {
    namespace ="com.mobiledeveloper.playzone_mobile.games.data"
}