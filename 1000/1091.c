#include <stdio.h>
 int main()
 {
    int a,m,d,n,k;
    scanf("%d %d %d %d",&a,&m,&d,&n);
    for(k=1;k!=n;k++)
    {
    a*=m;
    a+=d;
    }
    printf("%d",a);
    return 0;
 }