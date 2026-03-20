#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main() {
    // DIGITAL CLOCK

    // reference point jan 1 1970 (Epoch)
    time_t rawtime = 0; // rawtime holds the number of seconds
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning) {
        time(&rawtime); // update the time with the current time

        // displays amount of time that has passed since reference point
        // printf("%ld\n", rawtime);

        // returns pointer to a time struct with that contains fields of hours, minutes, seconds
        pTime = localtime(&rawtime); 

        // print the time, \r makes the line update rather than printing and entire new line
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        
        sleep(1);
    }

    return 0;
}