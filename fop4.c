#include <stdio.h>

int main() {
    float bs,hra,ta,gross=0,pay;
    printf("enter your basic salary : \n");
    scanf("%f", &bs);
    printf("bs = %.2f\n", bs);

    hra = (10 * bs)/100;
    ta = (5 * bs)/100;
    // scanf("%d%d", &hra, &ta);
    gross = bs+hra+ta;
    scanf("%f", &gross);
    printf("gross salary = %.2f\n", gross);

    pay = gross - (2*gross)/100;
    scanf("%f", &pay);
    printf("payable salary = %.2f\n", pay);
    return 0;
}
