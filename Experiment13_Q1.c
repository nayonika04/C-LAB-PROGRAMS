//WAP to define multiple macros to perform arithmetic function
#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((a) / (b))
#define MOD(a, b) ((a) % (b))

int main() {
    int a = 6;
    int b = 2;
    printf("\nAddition of number:%d\n",ADD(a,b));
    printf("\nSubtraction of number:%d\n",SUB(a,b));
    printf("\nMultiplication of number:%d",MUL(a,b));
    printf("\nDivision of number:%d\n", DIV(a,b));
    printf("\nModulus of number:%d\n", MOD(a,b));

    return 0;
}