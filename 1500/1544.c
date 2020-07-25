#include <stdio.h>
int n;
void f(int x)
{
    for (int i=0;i<x;i++)
        printf("*");
}
int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}