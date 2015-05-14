//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXEventTracker.h>

@class NSMutableArray, NSMutableSet;

@interface UXPinchEventTracker : UXEventTracker
{
    NSMutableArray *_monitoredTouchIds;
    NSMutableSet *_ignoredTouchIds;
    unsigned long long _numberOfMoveEvents;
    struct CGPoint _initialMouseLocation;
    struct CGPoint _initialNormalizedLocation;
    double _initialDistance;
    double _initialTime;
    double _firstTouchTime;
    double _currentDistance;
    double _previousDistance;
    double _distance;
    double _previousTime;
    BOOL _didBegin;
    BOOL _initiallyTwoTouches;
    double _scale;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (struct CGPoint)locationOfTouch:(id)arg1;
- (id)_touchForTouchIdentity:(id)arg1;
- (double)_distanceBetweenMonitoredTouches;
- (struct CGPoint)_normalizedlocation;
- (void)_updateVelocity:(id)arg1;
- (void)_touchesMovedWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)_processGestureWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
- (void)setTrackingEvent:(id)arg1;
- (id)init;
- (BOOL)eventTrackerRequiresTouches;

@end

