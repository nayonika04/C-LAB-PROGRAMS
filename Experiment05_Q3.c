// WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int target_number; 
    printf("Enter the number to find its frequency: ");
    scanf("%d", &target_number);

    int frequency = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == target_number) {
            frequency++;
    }

    printf("The number %d appears %d times in the array.\n", target_number, frequency);

    return 0;
}
}