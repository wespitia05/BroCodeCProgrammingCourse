#include <stdio.h>

// TEMPERATURE CONVERSION CALCULATOR //

int main() {

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("temperature conversion calculator\n");
    printf("C. celsius to fahrenheit\n");
    printf("F. fahrenheit to celsius\n");

    printf("is the temperature in celsius (C) or fahrenheit (F)?: ");

    scanf("%c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf("enter the temperature in celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32; // C to F
        printf("%.1f celsius is equal to %.1f fahrenheit\n", celsius, fahrenheit);
    }   
    else if (choice == 'F' || choice == 'f') {
        printf("enter the temperature in fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9; // F to C
        printf("%.1f fahrenheit is equal to %.1f celsius\n", fahrenheit, celsius);
    }
    else {
        printf("invalid choice. please select C or F\n");
    }

    return 0;
}