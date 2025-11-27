// Open an existing file and read its content character by character, and then close the file.
#include <stdio.h>
#include <stdlib.h> 
int main() {
    FILE *fptr; 
    char ch;    
 fptr = fopen("example.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open the file.\n");
        exit(EXIT_FAILURE); 
    }

    printf("File content:\n");

    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch); 
    }

    fclose(fptr);

    printf("\nFile closed successfully.\n");

    return 0; 
}
