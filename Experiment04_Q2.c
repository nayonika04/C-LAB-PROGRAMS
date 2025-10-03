//Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function. 
#include <stdio.h>

int global_var = 100; 

void my_function() {
    int local_var = 50; 
    printf("Inside my_function: local_var = %d\n", local_var);
    printf("Inside my_function: global_var = %d\n", global_var); 
}

int main() {
    
    printf("Outside my_function: global_var = %d\n", global_var);
    my_function();
    return 0;
}