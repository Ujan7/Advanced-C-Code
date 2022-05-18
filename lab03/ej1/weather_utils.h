#ifndef _WEATHER_UTILS
#define _WEATHER_UTILS

int minTempR(char *filepath);
void maxTempPerYeaR(WeatherTable a, int output[YEARS]);
void monthMaxPrecPerYear(WeatherTable a, int output[YEARS]);

#endif