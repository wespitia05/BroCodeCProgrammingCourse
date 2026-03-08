#include <stdio.h>

int main() {
    // array of strings

    char fruits[][10] = {"Apple", "Banana", "Coconut"};

    for(int i = 0; i < 3; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}