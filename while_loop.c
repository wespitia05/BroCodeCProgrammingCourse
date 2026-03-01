#include <stdio.h>

int main() {
    // while loop = continue some code WHILE the condition remains true
    //              condition must be true for us to enter while loop

    int number = 0;

    while(number <= 0) {
        printf("enter a number greater than 0: ");
        scanf("%d", &number);
    }

    return 0;
}