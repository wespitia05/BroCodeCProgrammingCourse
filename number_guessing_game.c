#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// NUMBER GUESSING GAME //

int main() {

    // create seed value based on current time
    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    // formula for generating random number
    // % will include 0 as a value, thats why we add 1
    int answer = (rand() % (max - min + 1)) + min;

    return 0;
}