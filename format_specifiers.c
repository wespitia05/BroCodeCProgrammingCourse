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

    return 0;
}