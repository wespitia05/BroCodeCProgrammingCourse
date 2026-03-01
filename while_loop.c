#include <stdio.h>
#include <string.h>

int main() {
    // while loop = continue some code WHILE the condition remains true
    //              condition must be true for us to enter while loop

    int number = 0;

    while(number <= 0) {
        printf("enter a number greater than 0: ");
        scanf("%d", &number);
    }

    // same concept, do the code once then check the while loop to see if 
    // it meets the condition
    /*
        do {
            printf("enter a number greater than 0: ");
            scanf("%d", &number);
        } while(number <= 0);
    */

    char name[50] = "";

    printf("enter your name: ");
    fgets(name, sizeof(name), stdin); // accept line of text
    name[strlen(name) - 1] = '\0'; // remove new line character from input buffer

    // check to see if the user didn't input anything for the name
    // therefore it will be a loop until they enter a string more than 0 characters
    while (strlen(name) == 0) {
        printf("name cannot be empty! please enter your name: ");
        fgets(name, sizeof(name), stdin); // accept line of text
        name[strlen(name) - 1] = '\0'; // remove new line character from input buffer   
    }

    printf("hello %s", name);

    return 0;
}