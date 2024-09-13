///
/// HybridKotlinTestObjectSpec.hpp
/// Fri Sep 13 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `Car` to properly resolve imports.
namespace margelo::nitro::image { struct Car; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `AnyMap` to properly resolve imports.
namespace NitroModules { class AnyMap; }
// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }

#include <optional>
#include <vector>
#include "Car.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include <unordered_map>
#include <string>
#include <future>
#include <NitroModules/AnyMap.hpp>
#include <functional>
#include "Person.hpp"

namespace margelo::nitro::image {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `KotlinTestObject`
   * Inherit this class to create instances of `HybridKotlinTestObjectSpec` in C++.
   * @example
   * ```cpp
   * class HybridKotlinTestObject: public HybridKotlinTestObjectSpec {
   *   // ...
   * };
   * ```
   */
  class HybridKotlinTestObjectSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridKotlinTestObjectSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridKotlinTestObjectSpec() { }

    public:
      // Properties
      virtual double getNumberValue() = 0;
      virtual void setNumberValue(double numberValue) = 0;
      virtual std::optional<double> getOptionalNumber() = 0;
      virtual void setOptionalNumber(std::optional<double> optionalNumber) = 0;
      virtual std::vector<double> getPrimitiveArray() = 0;
      virtual void setPrimitiveArray(const std::vector<double>& primitiveArray) = 0;
      virtual std::vector<Car> getCarCollection() = 0;
      virtual void setCarCollection(const std::vector<Car>& carCollection) = 0;
      virtual std::shared_ptr<ArrayBuffer> getSomeBuffer() = 0;
      virtual void setSomeBuffer(const std::shared_ptr<ArrayBuffer>& someBuffer) = 0;
      virtual std::unordered_map<std::string, std::string> getSomeRecord() = 0;
      virtual void setSomeRecord(const std::unordered_map<std::string, std::string>& someRecord) = 0;

    public:
      // Methods
      virtual std::future<void> asyncTest() = 0;
      virtual std::shared_ptr<AnyMap> createMap() = 0;
      virtual void addOnPersonBornListener(const std::function<void(const Person& /* p */)>& callback) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "KotlinTestObject";
  };

} // namespace margelo::nitro::image
