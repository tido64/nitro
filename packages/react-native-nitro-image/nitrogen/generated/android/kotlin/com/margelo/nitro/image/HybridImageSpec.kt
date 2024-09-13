///
/// HybridImageSpec.kt
/// Fri Sep 13 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.image

import android.util.Log
import androidx.annotation.Keep
import com.facebook.jni.HybridData
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*

/**
 * A Kotlin class representing the Image HybridObject.
 * Implement this abstract class to create Kotlin-based instances of Image.
 */
@DoNotStrip
@Keep
@Suppress("RedundantSuppression", "KotlinJniMissingFunction", "PropertyName", "RedundantUnitReturnType", "unused")
abstract class HybridImageSpec: HybridObject() {
  protected val TAG = "HybridImageSpec"

  @DoNotStrip
  val mHybridData: HybridData = initHybrid()

  init {
    // Pass this `HybridData` through to it's base class,
    // to represent inheritance to JHybridObject on C++ side
    super.updateNative(mHybridData)
  }

  // Properties
  @get:DoNotStrip
  @get:Keep
  abstract val size: ImageSize
  
  @get:DoNotStrip
  @get:Keep
  abstract val pixelFormat: PixelFormat
  
  @get:DoNotStrip
  @get:Keep
  @set:DoNotStrip
  @set:Keep
  abstract var someSettableProp: Double

  // Methods
  @DoNotStrip
  @Keep
  abstract fun toArrayBuffer(format: ImageFormat): Double
  
  @DoNotStrip
  @Keep
  abstract fun saveToFile(path: String, onFinished: (path: String) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun saveToFile(path: String, onFinished: Func_void_std__string): Unit {
    val result = saveToFile(path, onFinished.toLambda())
    return result
  }

  private external fun initHybrid(): HybridData

  companion object {
    private const val TAG = "HybridImageSpec"
    init {
      try {
        Log.i(TAG, "Loading NitroImage C++ library...")
        System.loadLibrary("NitroImage")
        Log.i(TAG, "Successfully loaded NitroImage C++ library!")
      } catch (e: Error) {
        Log.e(TAG, "Failed to load NitroImage C++ library! Is it properly installed and linked? " +
                    "Is the name correct? (see `CMakeLists.txt`, at `add_library(...)`)", e)
        throw e
      }
    }
  }
}
