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
    int *scores = malloc(number * sizeof(int));

    free(scores); // returning the "rented" space back to the OS
    scores = NULL; // avoids dangling pointers, resets the pointer

    return 0;
}