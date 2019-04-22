package com.superawesome.common.lib

import kotlin.test.Test
import kotlin.test.assertEquals

class PlatformTest {

    @Test
    fun `platform is ios`() {
        assertEquals(getPlatform(), "ios")
    }
}
