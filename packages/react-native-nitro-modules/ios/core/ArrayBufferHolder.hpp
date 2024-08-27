//
//  ArrayBufferHolder.hpp
//  react-native-nitro
//
//  Created by Marc Rousavy on 14.08.24.
//

#pragma once

#include "ArrayBuffer.hpp"
#include <memory>
#include <swift/bridging>

namespace margelo::nitro {

using namespace facebook;

/**
 * Holds instances of `std::shared_ptr<ArrayBuffer>`.
 * The reason this exists is because we cannot directly use `shared_ptr`,
 * nor virtual functions (`jsi::MutableBuffer`) in Swift.
 *
 * Passing around instances of `ArrayBufferHolder` (or `std::shared_ptr<ArrayBuffer>`)
 * does not involve any data copies and is almost zero-overhead - even when passed to JS.
 */
class ArrayBufferHolder {
public:
  ArrayBufferHolder(const std::shared_ptr<ArrayBuffer>& arrayBuffer) : _arrayBuffer(arrayBuffer) {}

public:
  /**
   * Create a new `NativeArrayBuffer` that wraps the given data of the given size, without copying it.
   *
   * Once the `ArrayBuffer` is no longer in use, the given `deleteFunc` will be called with the given `deleteFuncContext`
   * as an argument. The caller is responsible for deleting `data` (and `deleteFuncContext`) once this is called.
   */
  static ArrayBufferHolder makeBuffer(uint8_t* data, size_t size, DeleteFn deleteFunc, void* deleteFuncContext) {
    auto arrayBuffer = ArrayBuffer::makeBuffer(data, size, deleteFunc, deleteFuncContext);
    return ArrayBufferHolder(arrayBuffer);
  }

public:
  /**
   * Gets the raw bytes the underlying `ArrayBuffer` points to.
   */
  void* getData() const SWIFT_COMPUTED_PROPERTY {
    return _arrayBuffer->data();
  }
  /**
   * Gets the size of the raw bytes the underlying `ArrayBuffer` points to.
   */
  size_t getSize() const SWIFT_COMPUTED_PROPERTY {
    return _arrayBuffer->size();
  }

  /**
   * Whether the underlying `ArrayBuffer` actually owns the data it points to, or not.
   *
   * - If an `ArrayBuffer` owns the data, it is likely an ArrayBuffer created on the native side (C++/Swift).
   *   This means the `ArrayBuffer` is safe to access as long as you have a reference to it, and cannot be deleted otherwise.
   * - If an `ArrayBuffer` doesn't own the data, it is likely an ArrayBuffer coming from JS.
   *   This means the `ArrayBuffer` is **NOT** safe to access outside of the synchronous function's scope.
   *   If you plan on hopping do a different Thread, or storing a long-lived reference to it, make sure to **copy** the data.
   */
  bool getIsOwner() const SWIFT_COMPUTED_PROPERTY {
    return _arrayBuffer->isOwner();
  }

public:
  inline std::shared_ptr<ArrayBuffer> getArrayBuffer() const {
    return _arrayBuffer;
  }

private:
  std::shared_ptr<ArrayBuffer> _arrayBuffer;
};

} // namespace margelo::nitro