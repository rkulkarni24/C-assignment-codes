#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, i;
    float x, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        int power = 2 * i + 1;
        float term = pow(x, power) / factorial(power);

        if(i % 2 == 0)
            sum = sum + term;
        else
            sum = sum - term;
    }

    printf("Sum of sine series = %f", sum);

    return 0;
}