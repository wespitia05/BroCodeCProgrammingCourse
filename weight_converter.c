#include <stdio.h>

// WEIGHT CONVERTER CALCULATOR //

int main() {

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("weight conversion calculator\n");

    printf("1. kilograms to pounds\n");
    printf("2. pounds to kilograms\n");
    printf("enter your choice (1 or 2): \n");

    scanf("%d", &choice);

    if (choice == 1) {
        // kilograms to pounds
        printf("enter the weight in kilograms: ");
    }
    else if (choice == 2) {
        // pounds to kilograms
        printf("enter the weight in pounds: ");
    }
    else {
        printf("invalid choice. please enter 1 or 2.\n");
    }

    return 0;
}