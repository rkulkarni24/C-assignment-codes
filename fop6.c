#include <stdio.h>
long long factorial(int n) {
if (n == 0 || n == 1)
return 1;
else
return n * factorial(n - 1);
}
int main() {
int n, i;
long long fact = 1, fact_r;
printf("Enter a number=");
scanf("%d", &n);
if (n < 0) {
printf("Invalid Input");
return 0;
} else {
for (i = 1; i <= n; i++) {
fact *= i;
}
fact_r = factorial(n);
printf("Factorial (Iterative) = %lld\n", fact);
printf("Factorial (Recursive) = %lld\n", fact_r);
}
return 0;
}
