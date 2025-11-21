name: Arya Vaze
UIN: 25IC013
roll no:10
branch:civil
/******************************************************************************************/

#include <stdio.h>

long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial (Iterative) of %d = %lld\n", n, factorialIterative(n));
        printf("Factorial (Recursive) of %d = %lld\n", n, factorialRecursive(n));
    }

    return 0;
}
