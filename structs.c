#include <stdio.h>
#include <stdbool.h>

// very similar to object oriented programming (oop)
typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

int main() {
    // struct = a custom container that holds multiple
    //          pieces of related information
    //          similar to Objects in other languages
    Student student1 = {"Spongbob", 30, 2.5, true};

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime) ? "yes" : "no");

    return 0;
}