#include <stdio.h>
#include <stdbool.h>

int main() {

    float price = 10.00;
    bool isStudent = true;
    bool isSenior = false;

    // student = $9
    // senior = $8
    // student + senior = $7

    if(isStudent) {
        if(isSenior) {
            printf("you get a student discount of 10 percent\n");
            printf("you get a senior discount of 20 percent\n");
            price *= 0.7;
        }
        else {
            printf("you get a student discount of 10 percent\n");
            price *= 0.9;
        }
    }
    else {
        if(isSenior) {
            printf("you get a senior discount of 20 percent\n");
            price *= 0.8;
        }
    }

    printf("the price of a ticket is: $%.2f\n", price);

    return 0;
}