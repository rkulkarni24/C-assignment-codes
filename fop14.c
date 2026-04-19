#include <stdio.h>
#include <math.h>

int main()
{
int b, deci=0, i=0, remain;
printf("enter a binary number: ");
scanf("%d", &b);

while (b != 0)
{
remain= b%10;
deci+= remain*pow(2,i);
b/=10;
i++;
}
printf("decimal no. for given binary is: %d", deci);
return 0;
}
