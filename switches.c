#include <stdio.h>

int main() {

    // switch = an alternative to using many if-else statements
    //          more efficient w/ fixed integer values

    int dayOfWeek = 0;

    printf("enter a day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &dayOfWeek);

    switch(dayOfWeek) {
        case 'M':
            printf("it is monday");
            break;
        case 'T':
            printf("it is tuesday");
            break;
        case 'W':
            printf("it is wednesday");
            break;
        case 'R':
            printf("it is thursday");
            break;
        case 'F':
            printf("it is friday");
            break;
        case 'S':
            printf("it is saturday");
            break;
        case 'U':
            printf("it is sunday");
            break;
        default:
            printf("please only enter a day of the week (M, T, W, R, F, S, U)");
    }

    return 0;
}