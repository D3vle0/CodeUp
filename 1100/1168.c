#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a/10000;
    if (b==1||b==2)
        printf("%d",2012-(1900+c)+1);
    else
        printf("%d",2012-(2000+c)+1);
    return 0;
}