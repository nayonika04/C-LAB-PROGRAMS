//1. WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.
#include<stdio.h>
#include <stdio.h>

int main() {
    int num;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // Space before %c to consume the newline character
    } while (choice == 'y' || choice == 'Y');

    printf("\n--- Results ---\n");
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}
