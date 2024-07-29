///
/// JHybridImage.hpp
/// Mon Jul 29 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridImage.hpp"
#include <fbjni/fbjni.h>

namespace margelo::nitro::image {

  using namespace facebook;

  class JHybridImage: public jni::HybridClass<JHybridImage>, public HybridImage {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/JHybridImage;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  private:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridImage(jni::alias_ref<jhybridobject> jThis) : _javaPart(jni::make_global(jThis)) {}

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    // Properties
    ImageSize getSize() override;
    PixelFormat getPixelFormat() override;
    double getSomeSettableProp() override;
    void setSomeSettableProp(double someSettableProp) override;

  public:
    // Methods
    double toArrayBuffer(ImageFormat format) override;
    void saveToFile(const std::string& path, const Func_void_std__string& onFinished) override;

  private:
    friend HybridBase;
    jni::global_ref<JHybridImage::javaobject> _javaPart;
  };

} // namespace margelo::nitro::image