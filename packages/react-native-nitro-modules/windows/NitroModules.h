#pragma once

#include <memory>
#include <thread>

#include <JSI/JsiApiContext.h>
#include <TurboModuleProvider.h>

#include "CallInvokerDispatcher.hpp"
#include "InstallNitro.hpp"
#include "NativeModules.h"
#include "ThreadUtils.hpp"

namespace winrt::NitroModules {

namespace nitro = ::margelo::nitro;
namespace rnw = ::winrt::Microsoft::ReactNative;

REACT_MODULE(NitroModules, L"NitroModules")
struct NitroModules {
  // TODO: `REACT_INIT` is only executed on first access. RNW still needs to
  // implement eager loading.
  REACT_INIT(Initialize)
  void Initialize(rnw::ReactContext const& reactContext) noexcept {
    m_callInvoker = rnw::MakeAbiCallInvoker(reactContext.Handle());

    rnw::ExecuteJsi(reactContext, [callInvoker = m_callInvoker](facebook::jsi::Runtime& runtime) {
      auto dispatcher = std::make_shared<nitro::CallInvokerDispatcher>(callInvoker);
      nitro::install(runtime, dispatcher);
    });
  }

private:
  std::shared_ptr<facebook::react::CallInvoker> m_callInvoker{nullptr};
};

} // namespace winrt::NitroModules

namespace margelo::nitro {

std::string ThreadUtils::getThreadName() {
  std::stringstream stream;
  stream << std::this_thread::get_id();
  std::string threadId = stream.str();
  return "Thread #" + threadId;
}

void ThreadUtils::setThreadName(const std::string& name) {
  // TODO: We can probably use SetThreadDescription, but it takes a std::wstring
  // and we need to convert that from a std::string somehow
}

} // namespace margelo::nitro