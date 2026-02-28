#include <stdio.h>
#include <string.h>

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

    char name[50] = "";
    int age = 0;

    printf("enter your name: ");
    fgets(name, sizeof(name), stdin); // accept string input
    name[strlen(name) - 1] = '\0'; // remove new line character from input buffer

    printf("enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);

    return 0;
}