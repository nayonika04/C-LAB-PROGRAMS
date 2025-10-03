// WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.
#include <stdio.h>
int main() {
    int size, i;
    int positive_count = 0;
    int negative_count = 0;
    int odd_count = 0;
    int even_count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size]; 
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        }

        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("\nCounts:\n");
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Odd numbers: %d\n", odd_count);
    printf("Even numbers: %d\n", even_count);

    return 0;
}