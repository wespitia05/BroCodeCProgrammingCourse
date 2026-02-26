#include <stdio.h>

// CALCULATOR PROGRAM //

int main() {

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("enter the first number: ");
    scanf("%lf", &num1);
    
    printf("enter the operator (+ - * /): ");
    scanf("%c", &operator);

    printf("enter the second number: ");
    scanf("%lf", &num2);

    return 0;
}