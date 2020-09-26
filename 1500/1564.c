#include <stdio.h>

int a, b;
int gcd(int a, int b)
{
    int num=0;
    for (int i = 1; i < a; i++)
        if (a % i == 0 && b % i == 0)
            num = i;
    if (num==0) return 1;
    return num;
}
int main()
{
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
}