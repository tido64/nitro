//
//  JHybridObjectRegistry.hpp
//  react-native-nitro
//
//  Created by Marc Rousavy on 22.07.24.
//

#pragma once

#include "HybridObject.hpp"
#include "JHybridObjectInitializer.hpp"
#include <fbjni/fbjni.h>

namespace margelo::nitro {

using namespace facebook;

struct JHybridObjectRegistry : public jni::JavaClass<JHybridObjectRegistry> {
public:
  static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/core/HybridObjectRegistry;";

public:
  [[deprecated("HybridObjects should be registered from C++ instead. Either autolink them using `nitro.json`, "
               "or add them manually in the C++ HybridObjectRegistry.")]]
  static void registerHybridObjectConstructor(jni::alias_ref<jni::JClass> clazz, std::string hybridObjectName,
                                              jni::alias_ref<JHybridObjectInitializer> constructorFn);

public:
  static void registerNatives();
};

} // namespace margelo::nitro
