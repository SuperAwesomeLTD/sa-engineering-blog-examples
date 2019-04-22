package com.superawesome.shared

import kotlin.test.Test
import kotlin.test.assertEquals

class PlatformTest {

    @Test
    fun `platform is android`() {
        assertEquals(getPlatform(), "android")
    }
}