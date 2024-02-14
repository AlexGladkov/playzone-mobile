plugins {
    id("multiplatform-setup")
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                api(projects.common.games.api)
                implementation(projects.common.core)
            }
        }
    }
}

android {
    namespace ="com.mobiledeveloper.playzone_mobile.games.data"
}