// Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string.
#include <stdio.h>
#include <string.h>

void REVERSE(char str[]) {
    int len = strlen(str);
    char temp;

    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); 

    REVERSE(str);

    printf("\nReversed string: %s\n", str);

    return 0;
}

