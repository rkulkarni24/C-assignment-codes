#include <stdio.h>

int main() {
    int n, i, prod=0;
    printf("enter a number: \n");
    scanf("%d", &n);
    for (i=1; i<=10; i++)
        {
            prod = i*n;
            printf("%d * %d = %d\n", n, i, prod);
        }
    return 0;
}
