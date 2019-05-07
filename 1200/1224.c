#include <stdio.h>
int main(void)
{
    int a,b,c,d=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a*d > c*d)
        printf("<");
    else if (a*d < c*d)
        printf(">");
    else
        printf("=");

    return 0;
}
