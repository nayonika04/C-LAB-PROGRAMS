//Declare a static local variable inside a function. Observe how its value persists across function calls.
#include <stdio.h>

void incrementAndPrint() {
    static int counter = 0;
    counter++;
    printf("Counter: %d\n", counter);
}

int main() {
    printf("First call:\n");
    incrementAndPrint();

    printf("Second call:\n");
    incrementAndPrint();

    printf("Third call:\n");
    incrementAndPrint();

    return 0;
}