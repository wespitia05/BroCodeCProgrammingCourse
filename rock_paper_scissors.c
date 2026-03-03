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
            printf("you chose rock\n");
        case 2:
            printf("you chose paper\n");
        case 3:
            printf("you chose scissors\n");
    }

    switch(computerChoice) {
        case 1:
            printf("computer chose rock\n");
        case 2:
            printf("computer chose paper\n");
        case 3:
            printf("computer chose scissors\n");
    }

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

}