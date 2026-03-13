#include <stdio.h>

// change int to Number
typedef int Number;
// change char to String
typedef char String[50];

int main() {
    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           helps simplify complex types and improves code readability

    //           typedef existing_type new_name;

    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d", z);

    String name[] = "william espitia";

    printf("%s", name);

    return 0;
}