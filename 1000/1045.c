#include<stdio.h>
int main()
{
int a, b;
scanf("%d %d", &a, &b);
printf("%lld\n", a+b);
printf("%d\n", a-b);
printf("%lld\n", a*b);
printf("%d\n", a/b);
printf("%d\n", a%b);
printf("%.2f", (float)a/(float)b);
 
}