#include <stdio.h>
#include <stdlib.h>

int main() {
    // malloc() = a function in C that dynamically allocates
    //            a specified number of bytes in memory

    // prompt user to enter number of grades being inputted
    int number = 0;
    printf("enter the number of grades: ");
    scanf("%d", &number);

    // calculates how much space we need to reserve
    // returns pointer to where the memory is located we reserve
    char *grades = malloc(number * sizeof(char));

    // if memory location returned is null
    if(grades == NULL) {
        printf("memory allocation failed!\n");
        return 1; // exit program
    }

    // iterate through each amount of grades being inputted
    for (int i = 0; i < number; i++) {
        printf("enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]); // at index of i, insert grade at that address
    }

    // iterate through the inputted grades to print
    for(int i = 0; i < number; i++) {
        printf("%c ", grades[i]);
    }

    free(grades); // returning the "rented" space back to the OS
    grades = NULL; // avoids dangling pointers, resets the pointer

    return 0;
}