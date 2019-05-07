#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b,& c);
    if (a > b)//a>b
    {
        if (a > c)//a>b, a>c
        {
            if (b > c)//a>b>c
            {
                printf("%d %d %d\n", c, b, a);
            }
            else//a>c>=b
            {
                printf("%d %d %d\n", b, c, a);
            }
        }
        else//c>=a>b
        {
            printf("%d %d %d\n", b, a, c);
        }
    }
    else//b>=a
    {
        if (b > c)//b>=a, b>c
        {
            if (a > c)//b>=a>c
            {
                printf("%d %d %d\n", c, a, b);
            }
            else//b>=c>=a
            {
                printf("%d %d %d\n", a, c, b);
            }
        }
        else//c>=b>=a
        {
            printf("%d %d %d\n", a, b, c);
        }
    }
    return 0;
}