#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "array_helpers.h"


int minTempR(char *filepath) {

    FILE *pointer = NULL;

    pointer = fopen(filepath, "r");
    if (pointer == NULL) {
        fprintf(stderr, "File does not exist.\n");
        exit(EXIT_FAILURE);
    }

         unsigned int k_year = 0u;
         unsigned int k_month = 0u;
         unsigned int k_day = 0u;
             
    int res = fscanf(pointer, " %u %u %u ", &k_year, &k_month, &k_day);
        
        if (res != 3) {
            
            fprintf(stderr, "Invalid array.\n");
            exit(EXIT_FAILURE);
        }
    
    int minTempReg = weather_from_file(pointer)._min_temp;
    while (!feof(pointer)) {
        
        int res = fscanf(pointer, " %u %u %u ", &k_year, &k_month, &k_day);
        if (res != 3) {
            
            fprintf(stderr, "Invalid array.\n");
            exit(EXIT_FAILURE);
        }
        
    int mintemp = weather_from_file(pointer)._min_temp;

    if (mintemp < minTempReg)  {

            minTempReg = mintemp;
             
        }
        
    }

    fclose(pointer);
    return minTempReg;
}

void maxTempPerYeaR(WeatherTable a, int output[YEARS]) {
    int maxTemp;
    int _maxTemp;

    for (unsigned int year = 0; year < YEARS; year++) {
        maxTemp = a[year][0][0]._max_temp;

        for (unsigned int month = 0; month < MONTHS; month++) {
            for (unsigned int day = 1; day < DAYS; day++) {
                _maxTemp = a[year][month][day]._max_temp;

                if (_maxTemp > maxTemp) maxTemp = _maxTemp;                
            }
        }

        output[year] = maxTemp;
        printf("year: %d; temp: %d\n", year + FST_YEAR, maxTemp);
    }
}

void monthMaxPrecPerYear(WeatherTable a, int output[YEARS]) {
    unsigned int qPrecMax;
    unsigned int qPrec;

    for (unsigned int year = 0; year < YEARS; year++) {
        qPrecMax = 0u;

        for (unsigned int month = 0; month < MONTHS; month++) {
            qPrec = 0u;

            for (unsigned int day = 1; day < DAYS; day++) {
                qPrec = qPrec + a[year][month][day]._rainfall;                
            }

            if (qPrec > qPrecMax) {
                qPrecMax = qPrec;
                output[year] = month;
            }
        }

        printf("year: %d; prec: %d\n", year + FST_YEAR, output[year]);
    }
}

