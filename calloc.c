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

    return 0;
}