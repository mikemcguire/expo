//  Copyright © 2019 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <ABI44_0_0React/ABI44_0_0RCTMultipartStreamReader.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Fork of {@link ABI44_0_0RCTMultipartStreamReader} that doesn't necessarily
 * expect a preamble (first boundary is not necessarily preceded by CRLF).
 */
@interface ABI44_0_0EXUpdatesMultipartStreamReader : NSObject

- (instancetype)initWithInputStream:(NSInputStream *)stream boundary:(NSString *)boundary;
- (BOOL)readAllPartsWithCompletionCallback:(ABI44_0_0RCTMultipartCallback)callback;

@end

NS_ASSUME_NONNULL_END
