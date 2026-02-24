#include <stdio.h>

int main() {
    // if statement = do some code if a condition is true
    //                if the condition is false, don't do it

    int age = 12;

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

    return 0;
}