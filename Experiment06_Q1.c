//Develop a recursive and non-recursive function FACT (num) to find the factorial of a number, n!, defined by FACT No = 1, if n = 0. Otherwise, FACTNo = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages.
#include <stdio.h>

long long fact_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

long long fact_non_recursive(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

long long binomial_coeff_recursive(int n, int r) {
    return fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));
}

long long binomial_coeff_non_recursive(int n, int r) {
    return fact_non_recursive(n) / (fact_non_recursive(r) * fact_non_recursive(n - r));
}

int main() {
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! Ensure that 0 <= r <= n.\n");
        return 0;
    }

    long long comb_rec = binomial_coeff_recursive(n, r);
    long long comb_nonrec = binomial_coeff_non_recursive(n, r);

    printf("\n--- Binomial Coefficient Calculation ---\n");
    printf("Using Recursive Factorial:      C(%d, %d) = %lld\n", n, r, comb_rec);
    printf("Using Non-Recursive Factorial:  C(%d, %d) = %lld\n", n, r, comb_nonrec);

    printf("\n--- Binomial Coefficient Table ---\n");
    printf("  n   r   C(n,r)\n");
    printf("------------------\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%3d %3d %8lld\n", i, j, binomial_coeff_non_recursive(i, j));
        }
    }

    return 0;
}
