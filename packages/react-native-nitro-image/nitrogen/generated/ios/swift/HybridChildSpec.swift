///
/// HybridChildSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/// See ``HybridChildSpec``
public protocol HybridChildSpec_protocol: AnyObject, HybridBaseSpec_protocol {
  // Properties
  var childValue: Double { get }

  // Methods
  
}

/// See ``HybridChildSpec``
public class HybridChildSpec_base: HybridBaseSpec_base {
  private weak var cxxWrapper: HybridChildSpec_cxx? = nil
  public override func getCxxWrapper() -> HybridChildSpec_cxx {
  #if DEBUG
    guard self is HybridChildSpec else {
      fatalError("`self` is not a `HybridChildSpec`! Did you accidentally inherit from `HybridChildSpec_base` instead of `HybridChildSpec`?")
    }
  #endif
    if let cxxWrapper = self.cxxWrapper {
      return cxxWrapper
    } else {
      let cxxWrapper = HybridChildSpec_cxx(self as! HybridChildSpec)
      self.cxxWrapper = cxxWrapper
      return cxxWrapper
    }
  }
}

/**
 * A Swift base-protocol representing the Child HybridObject.
 * Implement this protocol to create Swift-based instances of Child.
 * ```swift
 * class HybridChild : HybridChildSpec {
 *   // ...
 * }
 * ```
 */
public typealias HybridChildSpec = HybridChildSpec_protocol & HybridChildSpec_base
