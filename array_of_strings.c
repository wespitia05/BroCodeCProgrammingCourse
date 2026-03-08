#include <stdio.h>

int main() {
    // array of strings

    char fruits[][10] = {"Apple", "Banana", "Coconut"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    for(int i = 0; i < size; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}