//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTimer.h"

@interface NSTimer (BlockMonitor)
+ (void)load;
+ (id)bm_scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
+ (id)bm_timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
+ (void)bm_executeBlockFromTimer:(id)arg1;
+ (id)bm_scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3;
+ (id)bm_timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3;
@end
