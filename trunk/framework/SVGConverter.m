//
//  SVGConverter.m
//  svg
//
//  Created by sotrosh on 11/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "SVGConverter.h"


@interface SVGConverter()

@property (nonatomic, assign) BOOL isProcessing;
@property (nonatomic, retain) NSMutableArray *SVGs;

@end

@implementation SVGConverter

@synthesize delegate;
@synthesize storagePath;
@synthesize isProcessing;
@synthesize SVGs;

- (id)initWithWindow:(id)aWindow {

    return nil;
}

+ (id)SVGConverterWithWindow:(id)aWindow {

    return [[[SVGConverter alloc] initWithWindow:aWindow] autorelease];
}

- (void)dealloc {

    self.delegate = nil;
    self.storagePath = nil;
    self.SVGs = nil;
    [super dealloc];
}

- (void)startProcessingWithSVGFiles:(NSArray *)aSVGFiles {

}

- (void)stopProcessing {

}

- (BOOL)isProcessing {

    return isProcessing;
}

@end
