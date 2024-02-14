plugins {
    id("multiplatform-setup")
}

kotlin {
    sourceSets {
        commonMain {
            dependencies {
                implementation(projects.common.core)
                implementation(projects.common.coreUtils)
                implementation(projects.common.auth.data)
                implementation(projects.common.games.data)
                implementation(projects.common.tournaments.data)
            }
        }
    }
}

android {
    namespace ="com.mobiledeveloper.playzone_mobile.umbrella.core"
}