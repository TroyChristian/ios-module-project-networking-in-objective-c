//
//  TLCCurrentForecast.h
//  DailyWeather
//
//  Created by Lambda_School_Loaner_219 on 2/20/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TLCWeatherForecast.h"
NS_ASSUME_NONNULL_BEGIN


//
@interface TLCCurrentForecast : TLCWeatherForecast
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly, copy) NSString *summary;
@property (nonatomic, readonly, copy) NSString *icon;
@property (nonatomic, readonly) double percipProbability;
@property (nonatomic, readonly) double percipIntensity;
@property (nonatomic, readonly) double temperature;
@property (nonatomic, readonly) double apparentTemperature;
@property (nonatomic, readonly) double humidity;
@property (nonatomic, readonly) double pressure;
@property (nonatomic, readonly) double windSpeed;
@property (nonatomic, readonly) int windBearing;
@property (nonatomic, readonly) int uvIndex;
- (instancetype) initWithTime:(NSDate *)time
                      summary:(NSString *)summary
                         icon:(NSString *)icon
            percipProbability:(double)percipProbability
              percipIntensity:(double)percipIntensity
                  temperature:(double)temperature
          apparentTemperature:(double)apparentTemperature
                     humidity:(double)humidity
                     pressure:(double)pressure
                    windSpeed:(double)windSpeed
                  windBearing:(int)windBearing
                      uvIndex:(int)uvIndex;
- (instancetype) initWithDictionary:(NSDictionary *)dictionary;


@end

NS_ASSUME_NONNULL_END
