#include <stdio.h>

int main() {
    // array = a fixed-size collection of elements of the same data type
    //         (similar to a variable, but it holds more than 1 value)

    int numbers[] = {10, 20, 30, 40, 50};
    printf("%d, ", numbers[0]);
    printf("%d, ", numbers[1]);
    printf("%d, ", numbers[2]);
    printf("%d, ", numbers[3]);
    printf("%d ", numbers[4]);

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    printf("%c, ", grades[0]);
    printf("%c, ", grades[1]);
    printf("%c, ", grades[2]);
    printf("%c, ", grades[3]);
    printf("%c ", grades[4]);

    for(int i = 0; i < 5; i++) {
        printf("%c ", grades[i]);
    }

    return 0;
}