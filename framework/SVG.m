//
//  SVG.m
//  app
//
//  Created by sotrosh on 11/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "SVG.h"

@implementation SVG

@synthesize name;
@synthesize scale;

- (id)initWithName:(NSString *)aName scale:(float)aScale {

    self = [super init];
    
    if (self != nil) {
        
        name = [[NSString alloc] initWithString:aName];
        scale = aScale;
    }
    
    return self;
}

+ (id)svgWithName:(NSString *)aName scale:(float)aScale {

    return [[SVG alloc] initWithName:aName scale:aScale];
}

- (void)dealloc {

    self.name = nil;
    [super dealloc];
}

@end
