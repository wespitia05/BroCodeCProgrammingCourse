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

    printf("*** NUMBER GUESSING GAME ***\n");

    // do this code while our guess doesn't equal our answer
    do {
        printf("guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if(guess < answer) {
            printf("TOO LOW!\n");
        }
        else if(guess > answer) {
            printf("TOO HIGH!\n");
        }
        else {
            printf("CORRECT!\n");
        }
    } while (guess != answer);

    printf("the answer is %d\n", answer);
    printf("it took you %d tries", tries);

    return 0;
}