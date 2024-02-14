plugins {
    id("multiplatform-setup")
    id(libs.plugins.libres.get().pluginId)
}

kotlin {
    sourceSets {
        commonMain.dependencies {
            implementation(projects.common.main.presentation)
            implementation(projects.common.coreCompose)
            implementation(projects.common.coreUtils)

            implementation(libs.kviewmodel.core)
            implementation(libs.kviewmodel.compose)
            implementation(libs.kviewmodel.odyssey)

            implementation(libs.odyssey.core)
            implementation(libs.odyssey.compose)
        }

        androidMain.dependencies {
            implementation(libs.coil.core)
            implementation(libs.coil.compose)
        }
    }
}

android {
    namespace = "com.mobiledeveloper.playzone_mobile.main.compose"
}