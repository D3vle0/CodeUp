#include <stdio.h>
#include <stdlib.h>
 
int main()
 
{
    int sum=0;
int i,a;
scanf("%d",&a);
for(i=0; i<=a; i++)
{
    if(i%2==0) 
   {
 
   sum=sum+i;
   }
}
printf("%d", sum);
 
 
 
    return 0;
 }