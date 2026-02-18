// preprocessor directive
// tells compiler to include standard input/output libraries
#include <stdio.h>

// function always has to be main
int main() {
    // variable = a reusable container for a value
    //            behaves as if it were the value it contains

    int age = 25;
    // % = format specifier, d = decimal
    printf("you are %d years old\n", age);

    // always add new line character otherwise print statements
    // will appear next to each other
    int year = 2026;
    printf("this year is %d\n", year);

    int quantity = 1;
    printf("you have ordered %d x items\n", quantity);

    float gpa = 2.5; // float variable holds decimal numbers
    // % = format specifier, f = floating point number
    printf("your gpa is %f\n", gpa);

    float price = 19.99;
    printf("the price is $%f\n", price);

    float temp = -10.1;
    printf("the temperature is %f F\n", temp);
}