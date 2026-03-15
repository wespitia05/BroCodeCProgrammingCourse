#include <stdio.h>

// creating our enum constants
typedef enum {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
} Day;

int main() {
    // enum = a user defined data type that consists
    //        of a set of named integer constants
    //        benefit: replaces numbers with readable names

    // SUNDAY = 0;
    // MONDAY = 1;
    // TUESDAY = 2;

    Day today = SUNDAY;
    Day tomorrow = MONDAY;

    printf("%d", today); // will print value of sunday (0)
    printf("%d", tomorrow); // will print value of monday (1)

    return 0;
}