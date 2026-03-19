#include <stdio.h>
#include <stdlib.h>

int main() {
    // calloc() = contigous allocation
    //            allocates memory dynamically and sets all allocated bytes to 0
    //            malloc() is faster, but calloc() leads to less bugs
    //            calloc(#, size)
    
    // prompt user for number of players
    int number = 0;
    printf("enter the number of players: ");
    scanf("%d", &number);

    // calculate number of players * number of what we are storing
    int *scores = calloc(number, sizeof(int));

    // check to see if pointer is null
    if(scores == NULL) {
        printf("memory allocation failed!\n");
        return 1; // exit program
    }

    for(int i = 0; i < number; i++) {
        printf("enter score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // iterate through the array like data structure
    for(int i = 0; i < number; i++) {
        printf("%d ", scores[i]);
    }

    free(scores); // returning the "rented" space back to the OS
    scores = NULL; // avoids dangling pointers, resets the pointer

    return 0;
}