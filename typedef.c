#include <stdio.h>

// change int to Number
typedef int Number;

int main() {
    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           helps simplify complex types and improves code readability

    //           typedef existing_type new_name;

    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d", z);

    return 0;
}