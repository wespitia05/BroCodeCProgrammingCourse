#include <stdio.h>

int main() {

    int age = 0;
    float gpa = 0.0f; // f to tell its a floating point number
    char grade = '\0'; // null terminator
    char name[30] = ""; // name has max size of 30 characters

    printf("enter your age: ");
    // scanf to prompt user for an input
    scanf("%d", &age); // & = address variable

    printf("enter your gpa: ");
    scanf("%f", &gpa);

    printf("enter your grade: ");
    scanf(" %c", &grade); // space before format specifier to skip new line character

    getchar(); // clears the new line character in the input buffer
    printf("enter your name: ");
    // scanf wont read any whitespace
    // use fgets(variable, sizeof(variable), stdin) // stdin = standard input
    fgets(name, sizeof(name), stdin);

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}