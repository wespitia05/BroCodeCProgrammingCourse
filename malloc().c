#include <stdio.h>

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

    free(grades); // returning the "rented" space back to the OS
    grades = NULL; // avoids dangling pointers, resets the pointer

    return 0;
}