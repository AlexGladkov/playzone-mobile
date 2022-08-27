import database.databaseModule
import json.serializationModule
import ktor.ktorModule
import org.kodein.di.DI

val coreModule = DI.Module("coreModule") {
    importAll(
        serializationModule,
        databaseModule,
        ktorModule
    )
}