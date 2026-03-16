#include <stdio.h>

typedef struct {
    char model[25];
    int year;
    int price;
} Car;

int main() {
    // array of structs = array where each element contains a struct {}
    //                    helps organize and groups together related data

    Car car1 = {"Mustang", 2025, 32000};
    Car car2 = {"Corvette", 2026, 68000};
    Car car2 = {"Challenger", 2024, 29000};

    return 0;
}