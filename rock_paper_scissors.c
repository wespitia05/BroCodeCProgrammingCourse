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

    return 0;
}

int getComputerChoice() {

}

int getUserChoice() {

}

void checkWinner(int userChoice, int computerChoice) {

}