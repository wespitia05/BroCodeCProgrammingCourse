#include <stdio.h>
#include <string.h>

int main() {
    // array of strings

    char fruits[][10] = {"Apple", 
                         "Banana", 
                         "Coconut"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    // changing first and last letter of each string
    fruits[0][0] = 'e';
    fruits[0][4] = 'A';

    fruits[1][0] = 'a';
    fruits[1][5] = 'B';

    fruits[2][0] = 't';
    fruits[2][6] = 'C';

    for(int i = 0; i < size; i++) {
        printf("%s\n", fruits[i]);
    }

    // EXAMPLE //
    // array of names can hold up to 3 names, 
    // each with a max character count of 25
    char names[4][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);

    /*
    printf("enter a name: ");
    fgets(names[0], sizeof(names[0]), stdin);
    names[0][strlen(names[0]) - 1] = '\0';

    printf("enter a name: ");
    fgets(names[1], sizeof(names[1]), stdin);
    names[1][strlen(names[1]) - 1] = '\0';

    printf("enter a name: ");
    fgets(names[2], sizeof(names[2]), stdin);
    names[2][strlen(names[2]) - 1] = '\0';
    */

    /*
    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);
    */

    // printing user input of array using for loop
    for(int i = 0; i < rows; i++) {
        printf("enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for(int i = 0; i < rows; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}