#include <stdio.h>
#include <string.h>

// MAD LIBS GAME //

int main() {

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);

    printf("enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);

    printf("enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);

    printf("enter a verb (ending with -ing): ");
    fgets(verb, sizeof(verb), stdin);

    printf("enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);

    printf("%s\n", noun);
    printf("%s\n", verb);
    printf("%s\n", adjective1);
    printf("%s\n", adjective2);
    printf("%s\n", adjective3);

    return 0;
}