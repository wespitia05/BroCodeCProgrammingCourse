#include <stdio.h>

// function data type is the same data type you are returning
int square(int num) {
    int result = num * num;

    return result;
}

double squareDouble(double num) {
    return num * num;
}

double cube(double num) {
    return num * num * num;
}

int main() {
    // return = returns a value back to where you call the function

    int x = square(2);
    double y = squareDouble(3.4);
    double z = cube(4.2);

    printf("%d\n", x);
    printf("%.2lf\n", y);
    printf("%.2lf\n", z);

    return 0;
}