//
//  HoneycombController.h
//  HoneycombView
//
//  Created by Matt Mower on 31/07/2008.
//  Copyright 2008 LucidMac Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import <HoneycombView/HoneycombView.h>

@interface HoneycombController : NSObject <LMHoneycombMatrix> {
  IBOutlet LMHoneycombView  *honeycombView;

  NSMutableArray            *cells;
}

@end
