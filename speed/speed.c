/*
 * Speed Lab
 *
 * Constraints:
 * 1. All numbers to two decimal places.
 * 2. Distance 425.5 Miles
 * 3. Hours:     7.5
 * 4. Output Miles Per Hour and Meters Per Second
 *
 * Algorithm
 * 1. Output Miles Per Hour.
 *     1.1 Divide distance by Hours
 * 2. Output Meters Per Second.
 *     2.1 Convert Miles to Meters
 *         2.1.1 Multiply miles by 1600 (1 miles == 1600 meters) to get meters.
 *     2.2 Convert hours into seconds
 *         2.2.1 Multiply hours by 60 (60 minutes == 1 hours) to get minutes.
 *         2.2.2 Multiply minutes by 60 (60 seconds == 1 minute) to get seconds.
 *     2.3 Divide meters by seconds
 */

#include <stdio.h>

#define MILES 425.5
#define HOURS 7.5
#define METERS_PER_MILE 1600
#define SECONDS_PER_HOUR 60 * 60

/**
 * This function will calculate MPH
 * @param float the miles
 * @param float the hours
 * @return MPH
 */
float milesPerHour(float, float);

/**
 * This function will calculate meters per second
 * @param float the miles
 * @param float the hours
 * @return
 */
float metersPerSecond(float, float);

int main()
{
    float mph, mps;

    mph = milesPerHour(MILES, HOURS);
    mps = metersPerSecond(MILES, HOURS);
    printf("Miles Per Hour: %20.2f\nMeters Per Second: %17.2f\n", mph, mps);
    return 0;
}

float milesPerHour(float miles, float hours)
{
    float mph = miles / hours;
    return mph;
}

float metersPerSecond(float miles, float hours)
{
    float meters, seconds, mps;

    meters = miles * METERS_PER_MILE;
    seconds = hours * SECONDS_PER_HOUR;

    mps = meters / seconds;
    return mps;

}