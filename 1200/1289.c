#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    scanf("%d %d", &a,&b);
    scanf("%d %d", &c,&d);
    scanf("%d %d", &e,&f);
    if (a*b>c*d && a*b>e*f)
        printf("%d", a*b);
    else if (c*d>a*b && c*d>e*f)
        printf("%d", c*d);
    else
        printf("%d", e*f);
}