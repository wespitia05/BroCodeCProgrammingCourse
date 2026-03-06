#include <stdio.h>
#include <string.h>

int main() {
    // array = a fixed-size collection of elements of the same data type
    //         (similar to a variable, but it holds more than 1 value)

    int numbers[] = {10, 20, 30, 40, 50};
    printf("%d, ", numbers[0]);
    printf("%d, ", numbers[1]);
    printf("%d, ", numbers[2]);
    printf("%d, ", numbers[3]);
    printf("%d ", numbers[4]);

    for(int i = 0; i < 5; i++) {
        printf("%c ", numbers[i]);
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    printf("%c, ", grades[0]);
    printf("%c, ", grades[1]);
    printf("%c, ", grades[2]);
    printf("%c, ", grades[3]);
    printf("%c ", grades[4]);

    for(int i = 0; i < 5; i++) {
        printf("%c ", grades[i]);
    }

    char name[] = "william espitia";
    printf("%c ", name[0]);
    printf("%c ", name[2]);
    printf("%c ", name[4]);
    printf("%c ", name[6]);
    printf("%c ", name[8]);
    printf("%c ", name[10]);

    for(int i = 0; i < strlen(name); i++) {
        printf("%c ", name[i]);
    }

    return 0;
}