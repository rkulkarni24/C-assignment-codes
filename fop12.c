#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int scd(int a, int b) {
    int min;
    if (a < b)
        min = a;
    else
        min = b;

    for (int i = 2; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            return i; // smallest common divisor > 1
        }
    }
    return 1; // if none found
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int GCD = gcd(num1, num2);
    int SCD = scd(num1, num2);
    printf("GCD = %d\n", GCD);
    printf("SCD (except 1) = %d\n", SCD);
    return 0;
}
