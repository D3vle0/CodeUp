#include <stdio.h>
int main()
{
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
float d = 1024*1024*8;
float e = a*b*c;
printf("%.2f MB", e/d);
}