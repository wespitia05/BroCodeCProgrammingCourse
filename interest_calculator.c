#include <stdio.h>
#include <math.h>

// COMPOUND INTEREST CALCULATOR //

int main() {

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("compound interest calculator\n");

    printf("enter the principal (P): ");
    scanf("%lf", &principal);

    printf("enter the interest rate percentage (r): ");
    scanf("%lf", &rate);
    rate = rate / 100; // return percentage

    printf("enter the number of years (t): ");
    scanf("%d", &years);

    printf("enter the number of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    // A = P(1 + (r / n)) ^ n * t
    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

    printf("after %d years, the total will be $%.2lf", years, total);

    return 0;
}