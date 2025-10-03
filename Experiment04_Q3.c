//Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.
#include <stdio.h>

int main() {
   
    int main_var = 10; 
    printf("Inside main block: main_var = %d\n", main_var);

    { 
        int inner_var1 = 20;
        printf("Inside inner block 1: main_var = %d, inner_var1 = %d\n", main_var, inner_var1);

        { 
            int nested_var = 30; 
            printf("Inside nested block: main_var = %d, inner_var1 = %d, nested_var = %d\n", main_var, inner_var1, nested_var);
        } 

          }

     { 
        int inner_var2 = 40; 
        printf("Inside inner block 2: main_var = %d, inner_var2 = %d\n", main_var, inner_var2);
    } 


    return 0;
}