///
/// NitroImage-Swift-Cxx-Bridge.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "NitroImage-Swift-Cxx-Bridge.hpp"

// Include C++ implementation defined types
#include "HybridBaseSpecSwift.hpp"
#include "HybridChildSpecSwift.hpp"
#include "HybridImageFactorySpecSwift.hpp"
#include "HybridImageSpecSwift.hpp"
#include "HybridTestObjectSwiftKotlinSpecSwift.hpp"
#include "NitroImage-Swift-Cxx-Umbrella.hpp"
#include <NitroModules/HybridContext.hpp>

namespace margelo::nitro::image::bridge::swift {

  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridImageSpec>
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> create_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(void* _Nonnull swiftUnsafePointer) {
    NitroImage::HybridImageSpec_cxx swiftPart = NitroImage::HybridImageSpec_cxx::fromUnsafe(swiftUnsafePointer);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridImageSpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__image__HybridImageSpec_(std__shared_ptr_margelo__nitro__image__HybridImageSpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridImageSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridImageSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridImageSpec\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridImageSpec_cxx swiftPart = swiftWrapper->getSwiftPart();
    return swiftPart.toUnsafe();
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec>
  std::shared_ptr<margelo::nitro::image::HybridImageFactorySpec> create_std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_(void* _Nonnull swiftUnsafePointer) {
    NitroImage::HybridImageFactorySpec_cxx swiftPart = NitroImage::HybridImageFactorySpec_cxx::fromUnsafe(swiftUnsafePointer);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridImageFactorySpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_(std__shared_ptr_margelo__nitro__image__HybridImageFactorySpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridImageFactorySpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridImageFactorySpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridImageFactorySpec\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridImageFactorySpec_cxx swiftPart = swiftWrapper->getSwiftPart();
    return swiftPart.toUnsafe();
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec>
  std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpec> create_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(void* _Nonnull swiftUnsafePointer) {
    NitroImage::HybridTestObjectSwiftKotlinSpec_cxx swiftPart = NitroImage::HybridTestObjectSwiftKotlinSpec_cxx::fromUnsafe(swiftUnsafePointer);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridTestObjectSwiftKotlinSpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_(std__shared_ptr_margelo__nitro__image__HybridTestObjectSwiftKotlinSpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridTestObjectSwiftKotlinSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridTestObjectSwiftKotlinSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridTestObjectSwiftKotlinSpec\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridTestObjectSwiftKotlinSpec_cxx swiftPart = swiftWrapper->getSwiftPart();
    return swiftPart.toUnsafe();
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridBaseSpec>
  std::shared_ptr<margelo::nitro::image::HybridBaseSpec> create_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(void* _Nonnull swiftUnsafePointer) {
    NitroImage::HybridBaseSpec_cxx swiftPart = NitroImage::HybridBaseSpec_cxx::fromUnsafe(swiftUnsafePointer);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridBaseSpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__image__HybridBaseSpec_(std__shared_ptr_margelo__nitro__image__HybridBaseSpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridBaseSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridBaseSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridBaseSpec\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridBaseSpec_cxx swiftPart = swiftWrapper->getSwiftPart();
    return swiftPart.toUnsafe();
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::image::HybridChildSpec>
  std::shared_ptr<margelo::nitro::image::HybridChildSpec> create_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(void* _Nonnull swiftUnsafePointer) {
    NitroImage::HybridChildSpec_cxx swiftPart = NitroImage::HybridChildSpec_cxx::fromUnsafe(swiftUnsafePointer);
    return HybridContext::getOrCreate<margelo::nitro::image::HybridChildSpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__image__HybridChildSpec_(std__shared_ptr_margelo__nitro__image__HybridChildSpec_ cppType) {
    std::shared_ptr<margelo::nitro::image::HybridChildSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::image::HybridChildSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridChildSpec\" is not implemented in Swift!");
    }
  #endif
    NitroImage::HybridChildSpec_cxx swiftPart = swiftWrapper->getSwiftPart();
    return swiftPart.toUnsafe();
  }

} // namespace margelo::nitro::image::bridge::swift
