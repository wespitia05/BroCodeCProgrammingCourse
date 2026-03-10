#include <stdio.h>

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

    printf("%s\n", questions[0]);
    printf("%s", options[0]);

    return 0;
}