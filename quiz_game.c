#include <stdio.h>

// QUIZ GAME //

int main() {
    // array of strings to hold all our questions (size of 100 characters)
    char questions[][100] = {
        "what is the largest planet in the solar system?",

    };
    // array of strings to hold all our answers (size of 100 characters)
    char options[][100] = {
        "A. jupiter\nB. saturn\nC. uranus\nD. neptune",
    };

    printf("%s\n", questions[0]);
    printf("%s", options[0]);

    return 0;
}