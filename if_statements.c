#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // if statement = do some code if a condition is true
    //                if the condition is false, don't do it

    /*
    int age = 0;

    printf("enter your age: ");
    scanf("%d", &age);

    if (age >= 65) {
        printf("you are a senior");
    }
    else if (age >= 18) {
        printf("you are an adult");
    }
    else if (age < 0) {
        printf("you haven't been born yet");
    }
    else if (age == 0) {
        printf("you are a newborn");
    }
    else {
        printf("you are not an adult");
    }

    bool isStudent = true;

    if (isStudent) {
        printf("you are a student");
    }
    else {
        printf("you are not a student");
    }
    */

    char name[50] = "";

    printf("enter your name: ");
    fgets(name, sizeof(name), stdin); // fgets for string input
    name[strlen(name) - 1] = '\0'; // always remove excess new line

    if (strlen(name) == 0) {
        printf("you did not enter your name");
    } 
    else {
        printf("hello %s", name);
    }

    return 0;
}