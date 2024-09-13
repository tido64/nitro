///
/// JHybridKotlinTestObjectSpec.cpp
/// Fri Sep 13 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridKotlinTestObjectSpec.hpp"

// Forward declaration of `Car` to properly resolve imports.
namespace margelo::nitro::image { struct Car; }
// Forward declaration of `Powertrain` to properly resolve imports.
namespace margelo::nitro::image { enum class Powertrain; }
// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `AnyMap` to properly resolve imports.
namespace NitroModules { class AnyMap; }

#include <optional>
#include <vector>
#include "Car.hpp"
#include "JCar.hpp"
#include <string>
#include "Powertrain.hpp"
#include "JPowertrain.hpp"
#include "Person.hpp"
#include "JPerson.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/JArrayBuffer.hpp>
#include <unordered_map>
#include <future>
#include <NitroModules/JPromise.hpp>
#include <NitroModules/AnyMap.hpp>
#include <NitroModules/JAnyMap.hpp>
#include <functional>
#include "JFunc_void_Person.hpp"

namespace margelo::nitro::image {

  jni::local_ref<JHybridKotlinTestObjectSpec::jhybriddata> JHybridKotlinTestObjectSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridKotlinTestObjectSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridKotlinTestObjectSpec::initHybrid),
    });
  }

  size_t JHybridKotlinTestObjectSpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  double JHybridKotlinTestObjectSpec::getNumberValue() {
    static const auto method = _javaPart->getClass()->getMethod<double()>("getNumberValue");
    auto result = method(_javaPart);
    return result;
  }
  void JHybridKotlinTestObjectSpec::setNumberValue(double numberValue) {
    static const auto method = _javaPart->getClass()->getMethod<void(double /* numberValue */)>("setNumberValue");
    method(_javaPart, numberValue);
  }
  std::optional<double> JHybridKotlinTestObjectSpec::getOptionalNumber() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JDouble>()>("getOptionalNumber");
    auto result = method(_javaPart);
    return result != nullptr ? std::make_optional(result->value()) : std::nullopt;
  }
  void JHybridKotlinTestObjectSpec::setOptionalNumber(std::optional<double> optionalNumber) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JDouble> /* optionalNumber */)>("setOptionalNumber");
    method(_javaPart, optionalNumber.has_value() ? jni::JDouble::valueOf(optionalNumber.value()) : nullptr);
  }
  std::vector<double> JHybridKotlinTestObjectSpec::getPrimitiveArray() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JArrayDouble>()>("getPrimitiveArray");
    auto result = method(_javaPart);
    return [&]() {
      size_t size = result->size();
      std::vector<double> vector;
      vector.reserve(size);
      result->getRegion(0, size, vector.data());
      return vector;
    }();
  }
  void JHybridKotlinTestObjectSpec::setPrimitiveArray(const std::vector<double>& primitiveArray) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JArrayDouble> /* primitiveArray */)>("setPrimitiveArray");
    method(_javaPart, [&]() {
      size_t size = primitiveArray.size();
      jni::local_ref<jni::JArrayDouble> array = jni::JArrayDouble::newArray(size);
      array->setRegion(0, size, primitiveArray.data());
      return array;
    }());
  }
  std::vector<Car> JHybridKotlinTestObjectSpec::getCarCollection() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JArrayClass<JCar>>()>("getCarCollection");
    auto result = method(_javaPart);
    return [&]() {
      size_t size = result->size();
      std::vector<Car> vector;
      vector.reserve(size);
      for (size_t i = 0; i < size; i++) {
        auto element = result->getElement(i);
        vector.push_back(element->toCpp());
      }
      return vector;
    }();
  }
  void JHybridKotlinTestObjectSpec::setCarCollection(const std::vector<Car>& carCollection) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JArrayClass<JCar>> /* carCollection */)>("setCarCollection");
    method(_javaPart, [&]() {
      size_t size = carCollection.size();
      jni::local_ref<jni::JArrayClass<JCar>> array = jni::JArrayClass<JCar>::newArray(size);
      for (size_t i = 0; i < size; i++) {
        const auto& element = carCollection[i];
        array->setElement(i, *JCar::fromCpp(element));
      }
      return array;
    }());
  }
  std::shared_ptr<ArrayBuffer> JHybridKotlinTestObjectSpec::getSomeBuffer() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JArrayBuffer::javaobject>()>("getSomeBuffer");
    auto result = method(_javaPart);
    return result->cthis()->getArrayBuffer();
  }
  void JHybridKotlinTestObjectSpec::setSomeBuffer(const std::shared_ptr<ArrayBuffer>& someBuffer) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JArrayBuffer::javaobject> /* someBuffer */)>("setSomeBuffer");
    method(_javaPart, JArrayBuffer::wrap(someBuffer));
  }
  std::unordered_map<std::string, std::string> JHybridKotlinTestObjectSpec::getSomeRecord() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JMap<jni::JString, jni::JString>>()>("getSomeRecord");
    auto result = method(_javaPart);
    return [&]() {
      std::unordered_map<std::string, std::string> map;
      map.reserve(result->size());
      for (const auto& entry : *result) {
        map.emplace(entry.first->toStdString(), entry.second->toStdString());
      }
      return map;
    }();
  }
  void JHybridKotlinTestObjectSpec::setSomeRecord(const std::unordered_map<std::string, std::string>& someRecord) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JMap<jni::JString, jni::JString>> /* someRecord */)>("setSomeRecord");
    method(_javaPart, [&]() {
      auto map = jni::JHashMap<jni::JString, jni::JString>::create(someRecord.size());
      for (const auto& entry : someRecord) {
        map->put(jni::make_jstring(entry.first), jni::make_jstring(entry.second));
      }
      return map;
    }());
  }

  // Methods
  std::future<void> JHybridKotlinTestObjectSpec::asyncTest() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JPromise::javaobject>()>("asyncTest");
    auto result = method(_javaPart);
    return [&]() {
      auto promise = std::make_shared<std::promise<void>>();
      result->cthis()->addOnResolvedListener([=](const jni::alias_ref<jni::JObject>& boxedResult) {
        promise->set_value();
      });
      result->cthis()->addOnRejectedListener([=](const jni::alias_ref<jni::JString>& message) {
        std::runtime_error error(message->toStdString());
        promise->set_exception(std::make_exception_ptr(error));
      });
      return promise->get_future();
    }();
  }
  std::shared_ptr<AnyMap> JHybridKotlinTestObjectSpec::createMap() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JAnyMap::javaobject>()>("createMap");
    auto result = method(_javaPart);
    return result->cthis()->getMap();
  }
  void JHybridKotlinTestObjectSpec::addOnPersonBornListener(const std::function<void(const Person& /* p */)>& callback) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_Person::javaobject> /* callback */)>("addOnPersonBornListener");
    method(_javaPart, JFunc_void_Person::fromCpp(callback));
  }

} // namespace margelo::nitro::image
