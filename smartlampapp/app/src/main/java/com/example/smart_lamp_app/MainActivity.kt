package com.example.smart_lamp_app

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val informButton=findViewById<Button>(R.id.button)
        informButton.setOnClickListener{
            Toast.makeText(this,"Security Informed with your address",Toast.LENGTH_LONG).show()
        }
    }
}