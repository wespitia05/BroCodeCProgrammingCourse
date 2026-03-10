#include <stdio.h>
#include <ctype.h>

// QUIZ GAME //

int main() {
    // array of strings to hold all our questions (size of 100 characters)
    char questions[][100] = {
        "what is the largest planet in the solar system?",
        "what is the hottest planet?",
        "what planet has the most moons?",
        "is the earth flat?"
    };
    // array of strings to hold all our answers (size of 100 characters)
    char options[][100] = {
        "A. jupiter\nB. saturn\nC. uranus\nD. neptune",
        "A. mercury\nB. venus\nC. earth\nD. mars",
        "A. earth\nB. mars\nC. jupiter\nD. saturn",
        "A. yes\nB. no\nC.maybe\nD. sometimes"
    };

    // 1D array of characters to hold our answers
    char answerKey[] = {'A', 'B', 'D', 'B'};

    // returns the number of questions we have (4)
    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0'; // holds our number of guesses
    int score = 0; // holds our score

    printf("*** QUIZ GAME ***");

    for(int i = 0; i < questionCount; i++) {
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);

        printf("\nenter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess); // makes user input uppercase

        if(guess == answerKey[i]) {
            printf("CORRECT!\n");
            score++;
        }
        else {
            printf("WRONG!\n");
        }
    }

    printf("\nyour score is %d out of %d points\n", score, questionCount);

    return 0;
}