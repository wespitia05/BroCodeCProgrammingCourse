#include <stdio.h>

int main() {
    // READING FILES

    // create pointer file struct, open it in the "read" mode
    FILE *pFile = fopen("input.txt", "r");

    // if pFile returns null it means it couldn't open/create the file
    if(pFile == NULL) {
        printf("could not open file\n");
        return 1; // serves as an exit code
    }

    fclose(pFile); // always close your files once youre done

    return 0;
}