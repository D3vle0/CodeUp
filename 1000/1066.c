#include <stdio.h>
int main()
{
    int a,b,c;
     
    scanf("%d %d %d", &a, &b, &c);
     
    (a%2==0)?printf("even\n"):printf("odd\n");
    (b%2==0)?printf("even\n"):printf("odd\n");
    (c%2==0)?printf("even\n"):printf("odd\n");
     
    return 0;
}