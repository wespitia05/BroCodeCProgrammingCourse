#include <stdio.h>

int main() {
    // for loop = repeat some code a limited # of times
    //            for(Initialization; Condition; Update)

    // start at 1 and count to 10
    for(int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    // start at 2 and count to 10 by twos
    for(int i = 2; i <= 10; i+=2) {
        printf("%d\n", i);
    }

    // start at 10 and count down to 0
    for(int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }

    // start at 10 and count down to 0 by twos
    for(int i = 10; i >= 0; i-=2) {
        printf("%d\n", i);
    }

    return 0;
}