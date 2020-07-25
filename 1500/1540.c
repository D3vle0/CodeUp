#include <stdio.h>
int n;
void f(int x)
{
    if (x)
        printf("non zero");
    else
        printf("zero");
}
int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}