// Open a file, read its content line by line, and display each line on the console.
#include <stdio.h> 
#include <stdlib.h> 

#define MAX_LINE_LENGTH 256 

int main() {
    FILE *filePointer; 
    char buffer[MAX_LINE_LENGTH]; 

    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        printf("Error: Could not open the file.\n");
        exit(EXIT_FAILURE); 
    }

    printf("Content of the file:\n");

    while (fgets(buffer, MAX_LINE_LENGTH, filePointer) != NULL) {
        printf("%s", buffer); 
    }

    fclose(filePointer);

    return 0; 
}