/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKFollowPath : SKAction {
    struct CGPath { } *_cgPath;
    struct SKCFollowPath { int (**x1)(); float x2; id x3; boolx4; double x5; double x6; float x7; float x8; double x9; boolx10; boolx11; id x12; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x13; int x14; float x15; float x16; float x17; float x18; float x19; unsigned int x20; struct { /* ? */ } *x21; struct { float x_22_1_1; float x_22_1_2; } x22; BOOL x23; BOOL x24; } *_mycaction;
}

+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 duration:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end