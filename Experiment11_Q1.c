//Write a program to apply bitwise operator AND, OR and NOT on bit level?
#include<stdio.h>
int main() {
    int a,b;
    int and_result,or_result,not_a_result,not_b_result;
    printf("enter two integers a and b");
    scanf("%d %d", &a,&b);

    and_result = a & b;
    printf("\nResult of Bitwise AND (a & b): %d\n", and_result);
        or_result = a | b;
    printf("Result of Bitwise OR (a | b): %d\n", or_result);

    not_a_result = ~a;
    printf("Result of Bitwise NOT (~a): %d\n", not_a_result);

    not_b_result = ~b;
    printf("Result of Bitwise NOT (~b): %d\n",not_b_result);

    return 0;
}





