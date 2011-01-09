/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableArray;



@interface EventSystemManager : NSObject 
{
    struct __IOHIDEventSystemClient { } *eventSystemClient;
    NSMutableArray *clientList;
    struct __CFRunLoop { } *runLoop;
    BOOL manageAccel;
    NSInteger accelEventIndex;
    NSInteger accelUpdateInternalUS;
    BOOL manageRotation;
    NSInteger rotationEventIndex;
    NSInteger rotationUpdateInternalUS;
}

+ (id)sharedEventSystem;

- (void)updateClientState;
- (void)setAccelUpdateInterval:(double)arg1;
- (void)refreshEventSystem;
- (void)addClient:(id)arg1;
- (void)removeClient:(id)arg1;
- (id)clientList;
- (struct __IOHIDEventSystemClient { }*)eventSystemClient;
- (BOOL)managingAccel;
- (BOOL)managingRotation;
- (void)setGyroUpdateInterval:(double)arg1;
- (id)init;
- (void)dealloc;

@end