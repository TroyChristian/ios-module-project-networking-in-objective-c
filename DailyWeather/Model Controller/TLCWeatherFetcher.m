//
//  WeatherFetcher.m
//  DailyWeather
//
//  Created by Lambda_School_Loaner_219 on 2/20/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import "WeatherFetcher.h"
#import "TLCCurrentForecast.h"
///https://api.darksky.net/forecast/API_KEY/lat,lon

@implementation WeatherFetcher
-(void)fetchCurrentWeatherForLatitude:(double)latitude
longitude:(dobule)longitude
                           completion:(TLCWeatherFetcherCompletion)completion {
    NSURL *url = [[NSURL alloc] initWithString:baseURLString];
}


@end
