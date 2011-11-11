//
//  SVGConverter.h
//  svg
//
//  Created by sotrosh on 11/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SVGConverter;
@class SVG;

@protocol SVGConverterDelegate <NSObject>

@required

- (void)SVGConverter:(SVGConverter *)aSVGConverter didStartProcessing:(NSArray *)aSVGs;
- (void)SVGConverter:(SVGConverter *)aSVGConverter didFinishProcessing:(NSArray *)aPNGs;

@optional

- (void)SVGConverter:(SVGConverter *)aSVGConverter didFailWithError:(NSError *)anError;
- (void)SVGConverter:(SVGConverter *)aSVGConverter didProcessSVG:(SVG *)aSVG;

@end

@interface SVGConverter : NSObject

- (id)initWithWindow:(id)aWindow;
+ (id)SVGConverterWithWindow:(id)aWindow;

- (void)startProcessingWithSVGFiles:(NSArray *)aSVGs;
- (void)stopProcessing;
- (BOOL)isProcessing;

@property (nonatomic, assign) id <SVGConverterDelegate> delegate;
@property (nonatomic, copy) NSString *storagePath;

@end
