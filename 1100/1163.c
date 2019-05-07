#include <stdio.h>

int main()
{
    int a,b,c,d;

    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    d/=100;
    d%=10;
    if(d%2==0)
    printf("대박");
    else
    printf("그럭저럭");
    return 0;
}