#include <stdio.h>

int main() {
    int n, i, sum, d, cube;
    printf("enter a number between 100 and 999: \n");
    scanf("%d", &n);
    i = n;
    sum = 0;
    while (n>0)
        {
            d = n%10;
            cube = d*d*d;
            sum += cube;
            n = n/10;
        }
        if (sum == i)
            printf("%d is an armstrong number\n", i);
        else
            printf("not an armstrong number");
    return 0;
}
