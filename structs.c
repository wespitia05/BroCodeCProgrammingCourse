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
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 49, 3.2, false};

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime) ? "yes" : "no");

    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("GPA: %.2f\n", student2.gpa);
    printf("Full Time: %s\n", (student2.isFullTime) ? "yes" : "no");

    printf("Name: %s\n", student3.name);
    printf("Age: %d\n", student3.age);
    printf("GPA: %.2f\n", student3.gpa);
    printf("Full Time: %s\n", (student3.isFullTime) ? "yes" : "no");

    return 0;
}