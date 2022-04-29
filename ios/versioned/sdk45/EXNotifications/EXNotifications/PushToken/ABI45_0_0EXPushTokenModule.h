// Copyright 2018-present 650 Industries. All rights reserved.

#import <ABI45_0_0ExpoModulesCore/ABI45_0_0EXExportedModule.h>
#import <ABI45_0_0ExpoModulesCore/ABI45_0_0EXEventEmitter.h>
#import <ABI45_0_0ExpoModulesCore/ABI45_0_0EXModuleRegistryConsumer.h>
#import <ABI45_0_0EXNotifications/ABI45_0_0EXPushTokenListener.h>

@interface ABI45_0_0EXPushTokenModule : ABI45_0_0EXExportedModule <ABI45_0_0EXEventEmitter, ABI45_0_0EXModuleRegistryConsumer, ABI45_0_0EXPushTokenListener>
@end
