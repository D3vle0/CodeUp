#include <stdio.h>
int main() {
int a, i=0, s=0;
scanf("%d", &a);
while(s<a)
{
i=i+1;
s=s+i; 
}
printf("%d",i);
return 0;
}