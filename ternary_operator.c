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

    int number = 8;
    // if the number is divisible by 2 with a remainder of 0, return even otherwise return odd
    printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd");

    int age = 21;
    // if the age is greater than 18 print adult, otherwise print child
    printf("%s", (age > 18) ? "adult" : "child");

    int hours = 11;
    int minutes = 3;
    // if hours is less than 12 print am, otherwise print pm
    // %02d adds zeros before digit
    printf("%02d:%02d %s", hours, minutes, (hours < 12) ? "am" : "pm");

    return 0;
}