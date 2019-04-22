package com.superawesome.androidapp

import android.os.Bundle
import android.support.v7.app.AppCompatActivity
import android.util.Log
import com.superawesome.shared.CommonClass

class MainActivity : AppCompatActivity() {


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val common = CommonClass()

        Log.w("Common-Test", "Platform is ${common.perform()}")
    }
}
