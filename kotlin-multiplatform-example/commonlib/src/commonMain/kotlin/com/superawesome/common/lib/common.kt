package com.superawesome.common.lib

expect fun getPlatform(): String

class CommonClass {
    fun perform(): String = getPlatform()
}