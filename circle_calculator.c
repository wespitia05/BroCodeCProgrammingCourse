#include <stdio.h>
#include <math.h>

int main() {

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; // const so we dont change value of pi

    printf("enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("area: %.2lf\n", area);
    printf("surface area: %.2lf\n", surfaceArea);
    printf("volume: %.2lf\n", volume);

    return 0;
}