#include <stdio.h>

int main() {
    // set size of uninitialized array, {0} clears out any unusual behavior
    int scores[5] = {0}; 

    for(int i = 0; i < 5; i++) {
        printf("enter a score: ");
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }

    return 0;
}