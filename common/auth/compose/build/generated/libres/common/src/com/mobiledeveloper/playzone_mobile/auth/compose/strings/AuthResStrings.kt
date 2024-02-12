package com.mobiledeveloper.playzone_mobile.auth.compose.strings

import io.github.skeptick.libres.strings.PluralForms
import io.github.skeptick.libres.strings.getCurrentLanguageCode
import kotlin.String
import kotlin.collections.Map

public object AuthResStrings {
  private val baseLocale: StringsEn = StringsEn

  private val locales: Map<String, Strings> = mapOf("en" to StringsEn)

  public val auth_forgot_password: String
    get() = locales[getCurrentLanguageCode()]?.auth_forgot_password ?:
        baseLocale.auth_forgot_password
}
