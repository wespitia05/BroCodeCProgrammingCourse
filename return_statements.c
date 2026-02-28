#include <stdio.h>
#include <stdbool.h>

// function data type is the same data type you are returning
int square(int num)
{
    int result = num * num;

    return result;
}

double squareDouble(double num)
{
    return num * num;
}

double cube(double num)
{
    return num * num * num;
}

bool ageCheck(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int getMax(int x, int y) {
    if(x >= y) {
        return x;
    }
    else {
        return y;
    }
}

int main()
{
    // return = returns a value back to where you call the function

    int x = square(2);
    double y = squareDouble(3.4);
    double z = cube(4.2);

    printf("%d\n", x);
    printf("%.2lf\n", y);
    printf("%.2lf\n", z);

    int age = 17;
    if (ageCheck(age))
    {
        printf("you may sign up\n");
    }
    else
    {
        printf("you must be 18+ to sign up\n");
    }

    int max = getMax(2, 3);
    printf("the max number is %d\n", max);

    return 0;
}