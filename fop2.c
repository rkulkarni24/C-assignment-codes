#include <stdio.h>
#include <math.h>
int main() {
    int a,b,op,result;
    printf("enter a number a: \n");
    printf("enter a number b: \n");
    scanf("%d%d", &a, &b);
    printf("a = %d , b = %d\n", a, b);
    printf("choose operation (1 for +,2 for -, 3 for *, 4 for /):\n");
    scanf("%d", &op);
    if (op == 1)
        result = a+b;
    else if (op == 2)
        result = a-b;
    else if (op == 3)
        result = a*b;
    else
        if (b>0)
            result = a/b;
        else
            printf("error");
    printf("result = %d", result);
    return 0;
}
