plugins {
    id(libs.plugins.kotlin.get().pluginId).apply(false)
    id(libs.plugins.android.get().pluginId).apply(false)
    id(libs.plugins.compose.get().pluginId).apply(false)
    id(libs.plugins.libres.get().pluginId).apply(false)
}