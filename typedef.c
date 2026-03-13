#include <stdio.h>

// change int to Number
typedef int Number;
// change char to String
typedef char String[50];
// change char to Initials
typedef char Initials[3];

int main() {
    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           helps simplify complex types and improves code readability

    //           typedef existing_type new_name;

    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d", z);

    String name = "william espitia";

    printf("%s", name);

    Initials user1 = "BC";
    Initials user2 = "SS";
    Initials user3 = "PS";
    Initials user4 = "ST";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}