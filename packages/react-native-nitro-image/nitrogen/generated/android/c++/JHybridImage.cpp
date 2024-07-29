///
/// JHybridImage.cpp
/// Mon Jul 29 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridImage.hpp"

jni::local_ref<JHybridImage::jhybriddata> JHybridImage::initHybrid(jni::alias_ref<jhybridobject> jThis) {
  return makeCxxInstance(jThis);
}

void JHybridImage::registerNatives() {
  registerHybrid({
    makeNativeMethod("initHybrid", JHybridImage::initHybrid),
  });
}

size_t JHybridImage::getExternalMemorySize() {
  static const auto method = _javaPart->getClass()->getMethod<long()>("getMemorySize");
  return method(_javaPart.get());
}

// Properties
ImageSize JHybridImage::getSize() override {
  static const auto method = _javaPart->getClass()->getMethod<ImageSize()>("getSize");
  return method(_javaPart.get());
}
PixelFormat JHybridImage::getPixelFormat() override {
  static const auto method = _javaPart->getClass()->getMethod<PixelFormat()>("getPixelFormat");
  return method(_javaPart.get());
}
double JHybridImage::getSomeSettableProp() override {
  static const auto method = _javaPart->getClass()->getMethod<double()>("getSomeSettableProp");
  return method(_javaPart.get());
}
void JHybridImage::setSomeSettableProp(double someSettableProp) override {
  static const auto method = _javaPart->getClass()->getMethod<void(double)>("setSomeSettableProp");
  return method(_javaPart.get(), someSettableProp);
}

// Methods
double JHybridImage::toArrayBuffer(ImageFormat format) override {
  static const auto method = _javaPart->getClass()->getMethod<double(ImageFormat)>("toArrayBuffer");
  return method(_javaPart.get(), format);
}
void JHybridImage::saveToFile(const std::string& path, const Func_void_std__string& onFinished) override {
  static const auto method = _javaPart->getClass()->getMethod<void(std::string, Func_void_std__string)>("saveToFile");
  return method(_javaPart.get(), path, onFinished);
}