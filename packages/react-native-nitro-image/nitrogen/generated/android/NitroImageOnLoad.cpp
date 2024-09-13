///
/// NitroImageOnLoad.cpp
/// Fri Sep 13 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "NitroImageOnLoad.hpp"

#include <jni.h>
#include <fbjni/fbjni.h>
#include <NitroModules/HybridObjectRegistry.hpp>

#include "JHybridImageSpec.hpp"
#include "JFunc_void_std__string.hpp"
#include "JHybridImageFactorySpec.hpp"
#include "JHybridKotlinTestObjectSpec.hpp"
#include "JFunc_void_Person.hpp"
#include <NitroModules/JNISharedPtr.hpp>
#include "HybridTestObject.hpp"

namespace margelo::nitro::image {

int initialize(JavaVM* vm) {
  using namespace margelo::nitro;
  using namespace margelo::nitro::image;
  using namespace facebook;

  return facebook::jni::initialize(vm, [] {
    // Register native JNI methods
    margelo::nitro::image::JHybridImageSpec::registerNatives();
    margelo::nitro::image::JFunc_void_std__string::registerNatives();
    margelo::nitro::image::JHybridImageFactorySpec::registerNatives();
    margelo::nitro::image::JHybridKotlinTestObjectSpec::registerNatives();
    margelo::nitro::image::JFunc_void_Person::registerNatives();

    // Register Nitro Hybrid Objects
    HybridObjectRegistry::registerHybridObjectConstructor(
      "ImageFactory",
      []() -> std::shared_ptr<HybridObject> {
        static auto javaClass = jni::findClassLocal("com/margelo/nitro/image/ImageFactory");
        static auto defaultConstructor = javaClass->getConstructor<JHybridImageFactorySpec::javaobject()>();
    
        auto instance = javaClass->newObject(defaultConstructor);
        auto globalRef = jni::make_global(instance);
        return JNISharedPtr::make_shared_from_jni<JHybridImageFactorySpec>(globalRef);
      }
    );
    HybridObjectRegistry::registerHybridObjectConstructor(
      "TestObject",
      []() -> std::shared_ptr<HybridObject> {
        static_assert(std::is_default_constructible_v<HybridTestObject>,
                      "The HybridObject \"HybridTestObject\" is not default-constructible! "
                      "Create a public constructor that takes zero arguments to be able to autolink this HybridObject.");
        return std::make_shared<HybridTestObject>();
      }
    );
    HybridObjectRegistry::registerHybridObjectConstructor(
      "KotlinTestObject",
      []() -> std::shared_ptr<HybridObject> {
        static auto javaClass = jni::findClassLocal("com/margelo/nitro/image/KotlinTestObject");
        static auto defaultConstructor = javaClass->getConstructor<JHybridKotlinTestObjectSpec::javaobject()>();
    
        auto instance = javaClass->newObject(defaultConstructor);
        auto globalRef = jni::make_global(instance);
        return JNISharedPtr::make_shared_from_jni<JHybridKotlinTestObjectSpec>(globalRef);
      }
    );
  });
}

} // namespace margelo::nitro::image
