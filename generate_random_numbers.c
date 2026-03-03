#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // pseudo-random = appear random but are determined by a 
    //                 mathematical formula that uses a seed value
    //                 to generate a predictable sequence of numbers.
    //                 advanced: mersenne twister or /dev/random

    // create seed value based on current time
    srand(time(NULL));

    int min = 1;
    int max = 10;

    // formula for generating random number
    // % will include 0 as a value, thats why we add 1
    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d", randomNum1, randomNum2, randomNum3);

    return 0;
}