//
//  TLCCurrentForecast.m
//  DailyWeather
//
//  Created by Lambda_School_Loaner_219 on 2/20/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import "TLCCurrentForecast.h"

@implementation TLCCurrentForecast
- (instancetype) initWithTime:(NSDate *)time summary:(NSString *)summary icon:(NSString *)icon percipProbability:(double)percipProbability percipIntensity:(double)percipIntensity temperature:(double)temperature apparentTemperature:(double)apparentTemperature humidity:(double)humidity pressure:(double)pressure windSpeed:(double)windSpeed windBearing:(int)windBearing uvIndex:(int)uvIndex { self = [super init]; if (self) { _time = time; _summary = [summary copy]; _icon = [icon copy]; _percipProbability = percipProbability; _percipIntensity = percipIntensity; _temperature = temperature; _apparentTemperature = apparentTemperature; _humidity = humidity; _pressure = pressure; _windSpeed = windSpeed; _windBearing = windBearing; _uvIndex = uvIndex; } return self;} - (instancetype) initWithDictionary:(NSDictionary *)dictionary { NSNumber *timeNumber = dictionary[@"time"]; NSDate *time = [NSDate dateWithTimeIntervalSince1970:timeNumber.longValue / 1000.0]; NSString *summary = dictionary[@"summary"]; NSString *icon = dictionary[@"icon"]; NSNumber *percipProbability = dictionary[@"percipProbability"]; NSNumber *percipIntensity = dictionary[@"percipIntensity"]; NSNumber *temperature = dictionary[@"temperature"]; NSNumber *apparentTemperature = dictionary[@"apparentTemperature"]; NSNumber *humidity = dictionary[@"humidity"]; NSNumber *pressure = dictionary[@"pressure"]; NSNumber *windSpeed = dictionary[@"windSpeed"]; NSNumber *windBearing = dictionary[@"windBearing"]; NSNumber *uvIndex = dictionary[@"uvIndex"];  self = [self initWithTime:time summary:summary icon:icon percipProbability:percipProbability.doubleValue percipIntensity:percipIntensity.doubleValue temperature:temperature.doubleValue apparentTemperature:apparentTemperature.doubleValue humidity:humidity.doubleValue pressure:pressure.doubleValue windSpeed:windSpeed.doubleValue windBearing:windBearing.intValue uvIndex:uvIndex.intValue]; return self;} @end





