///
/// MapWrapper.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents an instance of `MapWrapper`, backed by a C++ struct.
 */
public typealias MapWrapper = margelo.nitro.image.MapWrapper

public extension MapWrapper {
  private typealias bridge = margelo.nitro.image.bridge.swift

  /**
   * Create a new instance of `MapWrapper`.
   */
  init(map: Dictionary<String, String>) {
    self.init({ () -> bridge.std__unordered_map_std__string__std__string_ in
      var __map = bridge.create_std__unordered_map_std__string__std__string_(map.count)
      for (__k, __v) in map {
        bridge.emplace_std__unordered_map_std__string__std__string_(&__map, std.string(__k), std.string(__v))
      }
      return __map
    }())
  }

  var map: Dictionary<String, String> {
    @inline(__always)
    get {
      return { () -> Dictionary<String, String> in
        var __dictionary = Dictionary<String, String>(minimumCapacity: self.__map.size())
        let __keys = bridge.get_std__unordered_map_std__string__std__string__keys(self.__map)
        for __key in __keys {
          let __value = self.__map[__key]!
          __dictionary[String(__key)] = String(__value)
        }
        return __dictionary
      }()
    }
    @inline(__always)
    set {
      self.__map = { () -> bridge.std__unordered_map_std__string__std__string_ in
        var __map = bridge.create_std__unordered_map_std__string__std__string_(newValue.count)
        for (__k, __v) in newValue {
          bridge.emplace_std__unordered_map_std__string__std__string_(&__map, std.string(__k), std.string(__v))
        }
        return __map
      }()
    }
  }
}
