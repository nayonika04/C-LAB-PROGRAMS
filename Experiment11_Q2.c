// Write a program to apply left shift and right shift?
#include <stdio.h>

int main() {
    int number, n;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the number of shift amount: ");
    scanf("%d", &n);
    
    int left = number << n;
    
    int right = number >> n;
    printf("\nOriginal number = %d\n", number);
    printf("Left shift  (num << %d)  = %d\n", n, left);
    printf("Right shift (num >> %d)  = %d\n", n, right);

    return 0;
}