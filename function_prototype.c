#include <stdio.h>
#include <stdbool.h>

// function prototype, actual function declared after main function
// without this, code won't work
void hello(char name[], int age);
bool ageCheck(int age);

int main() {
    // function prototype = provide the compiler w/ information about a function's:
    //                      name, return type, and parameters before its actual definition
    //                      enables type checking and allows functions to be used before
    //                      they're defined
    //                      imporves readability, organization and helps prevent errors

    hello("spongebob", 30);
    if(ageCheck(30)) {
        printf("you are old enough to work at the krusty krab");
    }
    else {
        printf("you must be 16+ to work at the krusty krab");
    }

    return 0;
}

// return type, function name (parameters)
void hello(char name[], int age) {
    printf("hello %s\n", name);
    printf("you are %d years old\n", age);
}

bool ageCheck(int age) {
    if (age >= 16) {
        return true;
    }
    else {
        return false;
    }
}