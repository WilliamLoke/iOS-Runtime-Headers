/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AppLaunchStatsState, NSDate, NSRunLoop, PCPersistentTimer;

@interface AppLaunchStatsScheduler : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {
    NSRunLoop *aplsRunloop;
    AppLaunchStatsState *aplsState;
    boolusefulDate;
    NSDate *fireWakeupDate;
    PCPersistentTimer *pcpTimer;
    NSDate *startDate;
    id theCallback;
    int timeZoneSecondsFromGMT;
}

- (void).cxx_destruct;
- (void)checkTimeZone;
- (void)generateFireDates;
- (id)init:(id)arg1 withRunLoop:(id)arg2 withCallback:(id)arg3;
- (void)logAll:(struct __aslclient { }*)arg1 withMsg:(struct __aslmsg { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __aslclient { }*)arg1 withMsg:(struct __aslmsg { }*)arg2 withLevel:(int)arg3;
- (void)programTimer;
- (void)restore:(id)arg1;
- (void)save:(id)arg1;
- (void)timerFired:(id)arg1;

@end