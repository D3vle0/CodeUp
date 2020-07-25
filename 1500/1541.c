#include <stdio.h>
int n;
void f(int x)
{
    if (x)
        printf("%s",x>0?"positive":"negative");
    else
        printf("zero");
}
int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}