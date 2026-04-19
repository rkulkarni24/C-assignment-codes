#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Square Root (manual: n^0.5)
    float sqrtResult = 1.0;
    for (int i = 0; i < 1000; i++)
        sqrtResult = (sqrtResult + n / sqrtResult) / 2;
    printf("\nSquare Root:    %.4f", sqrtResult);

    // Square
    printf("\nSquare:         %d", n * n);

    // Cube
    printf("\nCube:           %d", n * n * n);

    // Prime Check
    printf("\nPrime Check:    %d is %s prime", n, isPrime(n) ? "" : "not ");

    // Factorial
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    printf("\nFactorial:      %lld", fact);

    // Prime Factors
    printf("\nPrime Factors:  ");
    int temp = n;
    for (int i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }
    }
    if (temp > 1)
        printf("%d", temp);

    return 0;
}
