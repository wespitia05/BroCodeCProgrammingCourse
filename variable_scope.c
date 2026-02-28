#include <stdio.h>

int add(int x, int y) {
    int result = x + y;
    return result;
}

int subtract(int x, int y) {
    int result = x - y;
    return result;
}

int main() {
    // variable scope = refers to where a variable is recognized and accessible
    //                  variables can share the same name if
    //                  they're in different scopes {}

    // can have the same variable name, just in a different scope
    int result = add(3, 4);
    int result1 = subtract(4, 3);

    printf("%d\n", result);
    printf("%d\n", result1);

    return 0;
}