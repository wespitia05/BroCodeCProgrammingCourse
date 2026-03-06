#include <stdio.h>

// BANK PROGRAM //

// declare our function prototypes
void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {

    int choice = 0;
    float balance = 0.0f;

    printf("*** WELCOME TO THE BANK ***");

    // do the code while the choice does not equal 4 (exit)
    do {
        printf("\nselect an option:\n");
        printf("\n1. check balance\n");
        printf("\n2. deposit money\n");
        printf("\n3. withdraw money\n");
        printf("\n4. exit\n");
        printf("\nenter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                checkBalance(balance);
                break;
            case 2: 
                balance += deposit();
                break;
            case 3: 
                balance -= withdraw(balance);
                break;
            case 4: 
                printf("\nthank you for using the bank!\n");
                break;
            default:
                printf("\ninvalid choice! please select 1 - 4\n");
        }

    } while(choice != 4);

    return 0;
}

// declare our functions
void checkBalance(float balance) {
    printf("\nyou current balance is: $%.2f", balance);
}

float deposit() {
    float amount = 0.0f;

    printf("\nenter amount to deposit: $");
    scanf("%f", &amount);

    if(amount < 0) {
        printf("invalid amount\n");
        return 0.0f;
    }
    else {
        printf("successfully deposited $%.2f\n", amount);
        return amount;
    }
}

float withdraw(float balance) {
    float amount = 0.0f;

    printf("\nenter amount to withdraw: $");
    scanf("%f", &amount);

    if(amount < 0) {
        printf("invalid amount!\n");
        return 0.0f;
    }
    else if (amount > balance) {
        printf("insufficient funds! your balance is $%.2f\n", balance);
        return 0.0f;
    }
    else {
        printf("successfully withdrew $%.2f\n", amount);
        return amount;
    }
}