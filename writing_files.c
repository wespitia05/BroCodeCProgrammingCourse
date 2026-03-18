#include <stdio.h>

int main() {
    // WRITE A FILE 

    // create pointer file struct, open it in the "write" mode
    FILE *pFile = fopen("output.txt", "w");

    char text[] = "BOOTY BOOTY BOOTY\nROCKIN' EVERYWHERE!";

    // if pFile returns null it means it couldn't open/create the file
    if(pFile == NULL) {
        printf("error opening files\n");
        return 1; // serves as an exit code
    }

    // file print, 3 parameters(pointer to file, format specifier, text)
    fprintf(pFile, "%s", text);

    printf("file was written successfully");

    fclose(pFile); // always close your files once youre done

    return 0;
}