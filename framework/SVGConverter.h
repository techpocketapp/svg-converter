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

- (id)initWithWindow:(id)aWindow;
+ (id)SVGConverterWithWindow:(id)aWindow;

- (void)setStoragePath:(NSString *)aStoragePath;

- (void)startProcessingWithSVGFiles:(NSArray *)aSVGFiles;
- (void)stopProcessing;
- (BOOL)isProcessing;

@property (nonatomic, assign) id <SVGConverterDelegate> delegate;
@property (nonatomic, copy) NSString *storagePath;

@end
