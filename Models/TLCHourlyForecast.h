//
//  TLCHourlyForecast.h
//  DailyWeather
//
//  Created by Lambda_School_Loaner_219 on 2/19/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TLCWeatherForecast.h"
NS_ASSUME_NONNULL_BEGIN

@interface TLCHourlyForecast : TLCWeatherForecast



@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) NSString *icon;
@property (nonatomic, readonly) double temperature;
@property (nonatomic, readonly) double precipProbability;
@property (nonatomic, readonly) double precipIntensity;
@property (nonatomic, readonly) NSString *precipType;
@property (nonatomic, readonly) double apparentTemperature;
@property (nonatomic, readonly) double humidity;
@property (nonatomic, readonly) double pressure;
@property (nonatomic, readonly) double windSpeed;
@property (nonatomic, readonly) int windBearing;
@property (nonatomic, readonly) int uvIndex;

-(instancetype) initWithTime:(NSDate *)time
                     summary:(NSString *)summary
                        icon:(NSString *)icon
           precipProbability:(double)precipProbability
             precipIntensity:(double)precipIntensity
                  precipType:(NSString *)precipType
                 temperature: (double)temperature
         apparentTemperature:(double)apparentTemperature
                    humidity:(double)humidity
                    pressure:(double)pressure
                   windSpeed:(double)windSpeed
                 windBearing:(int)windBearing
                     uvIndex:(int)uvIndex;

-(instancetype) initWithDictionary:(NSDictionary *)dictionary;


@end

NS_ASSUME_NONNULL_END
