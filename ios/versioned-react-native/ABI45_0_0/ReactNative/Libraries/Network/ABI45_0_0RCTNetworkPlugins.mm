/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated by an internal plugin build system
 */

#ifndef ABI45_0_0RN_DISABLE_OSS_PLUGIN_HEADER

// OSS-compatibility layer

#import "ABI45_0_0RCTNetworkPlugins.h"

#import <string>
#import <unordered_map>

Class ABI45_0_0RCTNetworkClassProvider(const char *name) {
  // Intentionally leak to avoid crashing after static destructors are run.
  static const auto sCoreModuleClassMap = new const std::unordered_map<std::string, Class (*)(void)>{
    {"Networking", ABI45_0_0RCTNetworkingCls},
    {"DataRequestHandler", ABI45_0_0RCTDataRequestHandlerCls},
    {"FileRequestHandler", ABI45_0_0RCTFileRequestHandlerCls},
    {"HTTPRequestHandler", ABI45_0_0RCTHTTPRequestHandlerCls},
  };

  auto p = sCoreModuleClassMap->find(name);
  if (p != sCoreModuleClassMap->end()) {
    auto classFunc = p->second;
    return classFunc();
  }
  return nil;
}

#endif // ABI45_0_0RN_DISABLE_OSS_PLUGIN_HEADER
