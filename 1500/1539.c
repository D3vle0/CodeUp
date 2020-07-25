#include <stdio.h>
int n;
void f(int x)
{
    if (x)
        printf("true");
    else
        printf("false");
}
int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}