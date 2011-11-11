//
//  SVGConverter.m
//  svg
//
//  Created by sotrosh on 11/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "SVGConverter.h"


@interface SVGConverter()

@end

@implementation SVGConverter

@synthesize delegate;
@synthesize storagePath;

- (id)initWithWindow:(id)aWindow {

}

+ (id)SVGConverterWithWindow:(id)aWindow {

    return [[[SVGConverter alloc] initWithWindow:aWindow] autorelease];
}

- (void)dealloc {

    self.storagePath = nil;
    [super dealloc];
}

- (void)startProcessingWithSVGFiles:(NSArray *)aSVGFiles {

}

- (void)stopProcessing {

}

- (BOOL)isProcessing {

}

@end
