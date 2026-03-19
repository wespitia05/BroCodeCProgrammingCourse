#include <stdio.h>

int main() {
    // realloc() = reallocation
    //             resize previously allocated memory
    //             realloc(ptr, bytes)

    // prompt user for number of prices
    int number = 0;
    printf("enter the number of prices: ");
    scanf("%d", &number);

    // calculate number of prices * number of what we are storing
    float *prices = malloc(number, sizeof(float));

    free(prices); // returning the "rented" space back to the OS
    prices = NULL; // avoids dangling pointers, resets the pointer

    return 0;
}