package com.superawesome.shared

expect fun getPlatform(): String

class CommonClass {
    fun perform(): String = getPlatform()
}