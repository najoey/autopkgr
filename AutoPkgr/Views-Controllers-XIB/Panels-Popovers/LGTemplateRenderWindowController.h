//
//  LGTemplateRenderPanel.h
//  AutoPkgr
//
//  Created by Eldon Ahrold on 12/6/15.
//  Copyright 2015-2016 The Linde Group, Inc.
//

#import "LGWindowController.h"
#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>
@class LGTemplateRenderWindowController;

@interface LGTemplateRenderWindowController : LGWindowController
@property (copy, nonatomic) NSDictionary *exampleData;
- (NSString *)templateString;
@end
