#include <stdio.h>

int main() {
    // READING FILES

    // create pointer file struct, open it in the "read" mode
    FILE *pFile = fopen("input.txt", "r");

    char buffer[1024] = {0};

    // if pFile returns null it means it couldn't open/create the file
    if(pFile == NULL) {
        printf("could not open file\n");
        return 1; // serves as an exit code
    }

    // while the buffer being read isn't null, print out the contents
    while(fgets(buffer, sizeof(buffer), pFile) != NULL) {
        printf("%s", buffer);
    }

    fclose(pFile); // always close your files once youre done

    return 0;
}