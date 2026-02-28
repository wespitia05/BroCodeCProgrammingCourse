#include <stdio.h>

// declare the parameters as (object type object, object type object)
void happyBirthday(char name[], int age) {
    printf("\nhappy birthday to you!");
    printf("\nhappy birthday to you!");
    printf("\nhappy birthday dear %s!", name);
    printf("\nhappy birthday to you!");
    printf("\nyou are %d years old!", age);
}

int main() {
    // function = a reusable section of code that can be invoked "called"
    //            arguments can be sent to a function so that it can use them

    char name[] = "william";
    int age = 28;

    happyBirthday(name, age);

    return 0;
}