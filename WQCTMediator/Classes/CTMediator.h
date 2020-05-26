//
//  CTMediator.h
//  Pods-WQCTMediator_Tests
//
//  Created by chenweiqiang on 2020/5/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString * const kCTMediatorParamsKeySwiftTargetModuleName;

@interface CTMediator : NSObject

+ (instancetype)sharedInstance;

// 远程App调用入口
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *info))completion;
// 本地组件调用入口
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params shouldCacheTarget:(BOOL)shouldCacheTarget;
- (void)releaseCachedTargetWithTargetName:(NSString *)targetName;

@end

NS_ASSUME_NONNULL_END
