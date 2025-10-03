//Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>
int global_var=100;

void function_one() {
    printf("inside function_one: global_var = %d\n", global_var);
    global_var += 50;
    printf("inside function_one: global_var = %d\n", global_var);
}

void function_two() {
    printf("inside function_two: global_var = %d\n", global_var);
}

int main() {
    printf("in main: global_var = %d\n", global_var);
    function_one();
    function_two();

    printf("in main: global_var = %d\n", global_var);
    return 0;
}
