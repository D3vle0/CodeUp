#include<cstdio>
int main()
{
    int a,i,k=0;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    if((i%10)==1)
    k++;
 
    printf("%d",k);
}