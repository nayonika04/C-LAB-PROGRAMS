//Write a program to create a new file and write text into it
#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *fptr; 
    char text_to_write[] = "This is some text to be written into the file.\n"; // Text to write

    fptr = fopen("my_new_file.txt", "w");

    if (fptr == NULL) {
        printf("Error: Could not open/create the file.\n");
        exit(1); 
    }

    printf("File 'my_new_file.txt' opened successfully for writing.\n");

    fprintf(fptr, "%s", text_to_write);
    fprintf(fptr, "This is another line of text.\n");

    printf("Text successfully written to the file.\n");

    fclose(fptr);

    printf("File 'my_new_file.txt' closed.\n");

    return 0; 
}