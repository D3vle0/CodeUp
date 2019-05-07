#include <stdio.h>
int main()
{
int n,a;
scanf("%d", &n);
ang:
scanf("%d", &a);
printf("%d\n", a);
if (--n!= 0)goto ang;
}