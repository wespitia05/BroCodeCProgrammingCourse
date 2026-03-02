#include <stdio.h>

int main() {
    // break = break out of a loop (STOP)
    // continue = skip current cycle of a loop (SKIP)

    for(int i = 1; i <= 10; i++) {
        if(i == 4) {
            // break; // break out of this for loop (stops) 1, 2, 3
            continue; // continue with rest of cycle, just skip this 1, 2, 3, 5, 6, 7, 8, 9, 10
        }
        printf("%d\n", i);
    }

    return 0;
}