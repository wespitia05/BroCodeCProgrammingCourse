#include <stdio.h>

int main() {

    // switch = an alternative to using many if-else statements
    //          more efficient w/ fixed integer values

    int dayOfWeek = 1;

    switch(dayOfWeek) {
        case 1:
            printf("it is monday");
            break;
        case 2:
            printf("it is tuesday");
            break;
        case 3:
            printf("it is wednesday");
            break;
        case 4:
            printf("it is thursday");
            break;
        case 5:
            printf("it is friday");
            break;
        case 6:
            printf("it is saturday");
            break;
        case 7:
            printf("it is sunday");
            break;
        default:
            printf("please only enter a number 1-7")
    }

    return 0;
}