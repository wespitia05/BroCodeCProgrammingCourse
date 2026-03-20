#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main() {
    // DIGITAL CLOCK

    time_t rawtime = 0; // rawtime holds the number of seconds
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning) {
        printf("test\n");
        sleep(1);
    }

    return 0;
}