///
/// HybridImageSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/// See ``HybridImageSpec``
public protocol HybridImageSpec_protocol: HybridObject {
  // Properties
  var size: ImageSize { get }
  var pixelFormat: PixelFormat { get }
  var someSettableProp: Double { get set }

  // Methods
  func toArrayBuffer(format: ImageFormat) throws -> Double
  func saveToFile(path: String, onFinished: @escaping (_ path: String) -> Void) throws -> Void
}

/// See ``HybridImageSpec``
public class HybridImageSpec_base {
  private weak var cxxWrapper: HybridImageSpec_cxx? = nil
  public func getCxxWrapper() -> HybridImageSpec_cxx {
  #if DEBUG
    guard self is HybridImageSpec else {
      fatalError("`self` is not a `HybridImageSpec`! Did you accidentally inherit from `HybridImageSpec_base` instead of `HybridImageSpec`?")
    }
  #endif
    if let cxxWrapper = self.cxxWrapper {
      return cxxWrapper
    } else {
      let cxxWrapper = HybridImageSpec_cxx(self as! HybridImageSpec)
      self.cxxWrapper = cxxWrapper
      return cxxWrapper
    }
  }
}

/**
 * A Swift base-protocol representing the Image HybridObject.
 * Implement this protocol to create Swift-based instances of Image.
 * ```swift
 * class HybridImage : HybridImageSpec {
 *   // ...
 * }
 * ```
 */
public typealias HybridImageSpec = HybridImageSpec_protocol & HybridImageSpec_base
