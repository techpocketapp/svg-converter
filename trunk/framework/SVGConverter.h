//
//  SVGConverter.h
//  svg
//
//  Created by sotrosh on 11/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SVGConverter;

@protocol SVGConverterDelegate <NSObject>

@required

- (void)SVGConverter:(SVGConverter *)aSVGConverter didStartProcessing:(NSArray *)aSVGFiles;
- (void)SVGConverter:(SVGConverter *)aSVGConverter didFinishProcessing:(NSArray *)aPNGFiles;

@optional

- (void)SVGConverter:(SVGConverter *)aSVGConverter didFailWithError:(NSError *)error;
- (void)SVGConverter:(SVGConverter *)aSVGConverter didProcessSVGFile:(NSString *)aSVGFile;

@end


@interface SVGConverter : NSObject

- (id)initWithLayer:(id)aWindow;
+ (id)SVGConverterWithLayer:(id)aWindow;

- (void)startProcessingWithSVGFiles:(NSArray *)aSVGFiles;
- (void)stopProcessing;

- (void)setStoragePath:(NSString *)aStoragePath;

@end
