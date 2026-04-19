#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
int n,i;
printf("enter number of elements: ");
scanf("%d",&n);
srand(time(0));
printf("pseudo random numbers are:\n");
for(i=1;i<=n;i++)
{
printf("%d\n",rand());
}
return 0;
}
