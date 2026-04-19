#include <stdio.h>
#include <math.h>
int main() {
    int op;
    printf("1.+\n2.-\n3.*\n4./\n5.power\n6.factorial\n");
    printf("choose operation: \n");
    scanf("%d", &op);
    if (op == 1 || op == 2 || op == 3 || op ==4){
        int a,b,result;
        printf("enter a: ");
        scanf("%d", &a);
        printf("enter b: ");
        scanf("%d", &b);
        if (op == 1){
            result = a+b;
            printf("sum = %d", result);
        }
        else if (op == 2){
            result = a-b;
            printf("diff = %d", result);
        }
        else if (op == 3) {
            result = a*b;
            printf("prod = %d", result);
        }
        else {
            if (b !=0){
                result = a/b;
                printf("div = %d", result);
            }
            else {
                printf("error");
            }
            }
        }
    else if (op == 5){
        int base, power, result;
        printf("input base value: ");
        scanf("%d", &base);
        printf("enter power: ");
        scanf("%d", &power);
        result = pow(base, power);
        printf("%d ^ %d = %d", base, power, result);
    }
    else if (op == 6){
        int n, i, fact = 1;
        printf("enter a number:\n");
        scanf("%d", &n);
        i = n;
        for (i = 1; i<=n; i++)
            {
                fact *= i;
            }
            printf("fact = %d", fact);
    }
    
    return 0;
}
