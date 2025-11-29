//WAP to define a function in directives?
#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define ADD(a, b) ((a) + (b))

int main() {
    int x = 10;
    int a = 5;
    int b = 15;

    printf("Square of %d is %d\n", x, SQUARE(x));
    printf("Sum of %d and %d is %d\n", a, b, ADD(a, b));

    return 0;
}