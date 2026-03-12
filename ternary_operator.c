#include <stdio.h>
#include <stdbool.h>

int main() {
    // ternary operator ? = shorthand for if-else statements
    // (condition) ? value_if_true : value_if_false;

    int x = 7;
    int y = 6;
    // if x > y, return x otherwise return y
    int max = (x > y) ? x : y;

    printf("%d", max);

    bool isOnline = true;
    // if online is true, return "online", if false return "offline"
    printf("%s", (isOnline) ? "online" : "offline");

    return 0;
}