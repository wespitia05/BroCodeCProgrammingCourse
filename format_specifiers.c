// preprocessor directive
// tells compiler to include standard input/output libraries
#include <stdio.h>

int main() {
    // format specifier = special tokens that begin with a % symbol,
    //                    followed by a character that specfifies the data type
    //                    and optional modifiers (width, precision, flags)
    //                    they control how data is displayed or interpreted

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "william";

    printf("%d", age); // displays decimal
    printf("%f", price); // displays floating point
    printf("%lf", pi); // displays long floating point
    printf("%c", currency); // displays character
    printf("%s", name); // displays string (arracy of characters)

    // setting width of our output
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -100;

    // prints the numbers with 3 spaces (right justify)
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);
    // prints the numbers with 4 spaces (left justify)
    printf("%-4d\n", num1);
    printf("%-4d\n", num2);
    printf("%-4d\n", num3);
    // prints the numbers with preceding +/- sign (right justify)
    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);
    printf("%+d\n", num4);


    return 0;
}