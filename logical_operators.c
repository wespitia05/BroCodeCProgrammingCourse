#include <stdio.h>
#include <stdbool.h>

int main() {
    // logical operators = used to combine or modify boolean expressions

    // && = AND
    // || = OR
    // !  = NOT

    int temp = 35;

    // both conditions MUST be true
    if(temp > 0 && temp < 30) {
        printf("the temperature is good");
    }
    // only one condition has to be true
    else if (temp > 30 || temp < 40) {
        printf("the temperature is bad");
    }

    bool isSunny = true;

    // if its not sunny outside, then it must be cloudy
    if (!isSunny) {
        printf("it is cloudy outside");
    }
    else {
        printf("it is sunny outside");
    }

    return 0;
}