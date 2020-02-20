//
//  WeatherFetcher.h
//  DailyWeather
//
//  Created by Lambda_School_Loaner_219 on 2/20/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^TLCWeatherFetcherArrayCompletion)(NSArray * _Nullable weatherArray, NSError * _Nullable error);
typedef void(^TLCWeatherFetcherArrayCompletion)( TLCCurrentForecast* _Nullable weather, NSError * _Nullable error);
@interface WeatherFetcher : NSObject

-(void)fetchCurrentWeatherForLatitude:(double)latitude
                                        longitude:(double)longitude
                           completion:(TLCWeatherFetcherCompletion)completion;

@end

NS_ASSUME_NONNULL_END
