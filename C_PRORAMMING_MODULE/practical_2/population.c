/* Population Projection
  Practical 2- Exercise 1
   Aayush K.C. */

#include <stdio.h>

int main() {
    long currentPopulation = 312032486;
    long secondsPerYear = 365 * 24 * 60 * 60;

    // using integer division so decimal part gets cut off (from the hint)
    long birthsPerYear = secondsPerYear / 7;
    long deathsPerYear = secondsPerYear / 13;
    long immigrantsPerYear = secondsPerYear / 45;

    long changePerYear = birthsPerYear - deathsPerYear + immigrantsPerYear;
    
    printf("Projected Population over 5 Years:\n");
    printf("----------------------------------\n");

    // loop through 5 years and print each one
    for (int i = 1; i <= 5; i++) {
        printf("Year %d: %ld\n", i, currentPopulation + changePerYear * i);
    }

    return 0;
}