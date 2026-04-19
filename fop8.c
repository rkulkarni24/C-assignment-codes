#include <stdio.h>

int main() {
    float a=0,b=0,c=0,d=0,e=0,result=0;
    printf("enter marks of 5 subjects: \n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    result = (a+b+c+d+e)*100/500;
    if (a<40 || b<40 || c<40 || d<40 || e<40)
    {
        printf("total percentage is %f\n", result);
        printf("failed\n");
    }
    else
    {
        result = (a+b+c+d+e)*100/500;
        printf("total percentage is %f\n", result);
        // scanf("%f", &result);
            if (result>=75)
                printf("%.2f: distinction!!", result);
            else if (result>=60 && result<=75)
                printf("%.3f: first division!",result);
            else if (result>=50 && result<=60)
                printf("%.2f: second division", result);
            else if (result>=40 && result<=50)
                printf("%.2f: third division", result);
            else
                printf("%.2f: better luck next time.", result);
    }
        
    return 0;
}
