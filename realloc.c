#include <stdio.h>
#include <stdlib.h>

int main() {
    // realloc() = reallocation
    //             resize previously allocated memory
    //             realloc(ptr, bytes)

    // prompt user for number of prices
    int number = 0;
    printf("enter the number of prices: ");
    scanf("%d", &number);

    // calculate number of prices * number of what we are storing
    float *prices = malloc(number * sizeof(float));

    // check to see if pointer is null
    if(prices == NULL) {
        printf("memory allocation failed!\n");
        return 1; // exit program
    }

    // user enters each price
    for(int i = 0; i < number; i++) {
        printf("enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    // iterate through the array like data structure
    for(int i = 0; i < number; i++) {
        printf("%f ", prices[i]);
    }

    free(prices); // returning the "rented" space back to the OS
    prices = NULL; // avoids dangling pointers, resets the pointer

    return 0;
}