#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// very similar to object oriented programming (oop)
typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

// function prototype
void printStudent(Student student);

int main() {
    // struct = a custom container that holds multiple
    //          pieces of related information
    //          similar to Objects in other languages
    Student student1 = {"Spongbob", 30, 2.5, true};
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 49, 3.2, false};
    Student student4 = {0}; //set all values to 0, neater

    // assigning data to struct
    strcpy(student4.name, "Sandy"); // assigning string
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    /*
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

    printf("Name: %s\n", student4.name);
    printf("Age: %d\n", student4.age);
    printf("GPA: %.2f\n", student4.gpa);
    printf("Full Time: %s\n", (student4.isFullTime) ? "yes" : "no");
    */

    return 0;
}

// easier way to print all students
void printStudent(Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full Time: %s\n", (student.isFullTime) ? "yes" : "no");
    printf("\n");
}