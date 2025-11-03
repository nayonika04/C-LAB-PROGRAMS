// Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges.
#include <stdio.h>

int ISPRIME(int num) {
    if (num <= 1)
        return 0; 

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }

    return 1; 
}

int main() {
    int lower, upper;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    if (lower > upper) {
        printf("Invalid range! Lower limit must be less than or equal to upper limit.\n");
        return 0;
    }

    printf("\n--- Prime Numbers between %d and %d ---\n", lower, upper);

    int found = 0;
    for (int i = lower; i <= upper; i++) {
        if (ISPRIME(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found)
        printf("No prime numbers found in this range.");

    printf("\n");
    return 0;
}
