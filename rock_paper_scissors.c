#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

// ROCK PAPER SCISSORS //

int main() {
    // create seed value based on current time
    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch(userChoice) {
        case 1:
            printf("you chose ROCK!\n");
            break;
        case 2:
            printf("you chose PAPER!\n");
            break;
        case 3:
            printf("you chose SCISSORS!\n");
            break;
    }

    switch(computerChoice) {
        case 1:
            printf("computer chose ROCK!\n");
            break;
        case 2:
            printf("computer chose PAPER!\n");
            break;
        case 3:
            printf("computer chose SCISSORS!\n");
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}

int getComputerChoice() {
    // returns a random number between 1 and 3
    return (rand() % 3) + 1;
}

int getUserChoice() {
    int choice = 0;

    do {
        printf("choose an option:\n");
        printf("\t1. ROCK\n");
        printf("\t2. PAPER\n");
        printf("\t3. SCISSORS\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
    } while(choice < 1 || choice > 3); // to escape this loop, user must choice 1, 2 or 3

    return choice;
}

void checkWinner(int userChoice, int computerChoice) {
    if(userChoice == computerChoice) {
        printf("it's a TIE!");
    }
    else if(userChoice == 1 && computerChoice == 3) {
        printf("you WIN!");
    }
    else if(userChoice == 2 && computerChoice == 1) {
        printf("you WIN!");
    }
    else if(userChoice == 3 && computerChoice == 2) {
        printf("you WIN!");
    }
    else {
        printf("you LOSE!");
    }
}