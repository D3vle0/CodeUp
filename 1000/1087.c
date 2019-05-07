#include <stdio.h>
int main()
{
int a,i=0, sum = 0;;
 
scanf("%d", &a);
do
{
i++;
sum+=i;
} while(sum<=a);
printf("%d",sum);
}