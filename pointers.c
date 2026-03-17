#include <stdio.h>

void birthday(int* age);

int main() {
    // pointer = a variable that stores the memory address of another variable
    //           benefit: they help avoid wasting memory by allowing you to pass
    //           the address of a large data structure instead of copying the entire data

    int age = 25;
    // * = dereference operator, & = gives you the address
    int *pAge = &age;

    printf("%p\n", &age); // returns memory address of variable
    printf("%p\n", pAge); // returns same value of variable

    birthday(pAge);

    printf("you are %d years old", age);

    return 0;
}

// have to pass pointer integer
void birthday(int* age) {
    // pass by reference
    (*age)++; // dereference age, then return value and increment
}