#include <stdio.h>

// creating our enum constants
typedef enum {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
} Day;

typedef enum {
    SUCCESS, FAILURE, PENDING
} Status;

void connectStatus(Status status); // function prototype

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

    if (today == SUNDAY || today == SATURDAY) {
        printf("its the weekend");
    }
    else {
        printf("its the weekday");
    }

    Status status = SUCCESS;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status) {
    switch(status) {
        case SUCCESS:
            printf("connection was successful\n");
            break;
        case FAILURE:
            printf("could not connect\n");
            break;
        case PENDING:
            printf("connecting...\n");
            break;
    }
}