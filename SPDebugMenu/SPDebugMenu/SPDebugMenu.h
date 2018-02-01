// SPDebugMenu.h
//
// The MIT License (MIT)
//
// Copyright (c) 2014 Sergio Padrino
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "SPDebugMenuAction.h"
#import "SPDebugMenuActionCell.h"
#import "SPDebugMenuLongPressTrigger.h"
#import "SPDebugMenuShakeTrigger.h"
#import "SPDebugMenuTapTrigger.h"
#import "SPDebugMenuTriggering.h"
#import "SPDebugMenuViewController.h"
#import "SPSendReportAction.h"
#import "SPSendReportStatusComposing.h"
#import "SPShakeTriggerWindow.h"
#import "SPSimulateMemoryWarningAction.h"

@protocol SPDebugMenuAction;
@protocol SPDebugMenuTriggering;

@interface SPDebugMenu : NSObject

/// Initializer with the window where the menu will be shown
- (id)initWithWindow:(UIWindow *)window;

/// Registers a trigger and sets itself as trigger's delegate
- (void)registerTrigger:(id<SPDebugMenuTriggering>)trigger;

/// Unregisters all triggers
- (void)unregisterAllTriggers;

/// Registers an action
- (void)registerAction:(id<SPDebugMenuAction>)action;

/// Unregisters all actions
- (void)unregisterAllActions;

@end
