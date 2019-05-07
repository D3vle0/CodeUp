#include <stdio.h>
int main()
{
    double a,b,c,res;
    scanf("%lf %lf", &a, &b);
    c=(a-100.0)*0.9;
    res=((b-c)*100.0)/c;
     
    if (res<=10.0)
        printf("정상");
    else if ((res <= 20.0) && (res >10.0))
        printf("과체중");
    else
        printf("비만");
}