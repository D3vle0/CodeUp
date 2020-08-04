#include <stdio.h>
int main() {
    int a,b,c,d,e;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d", &d, &e);

    if (a+b==c)
        printf("%d ", d+e);
    if (a-b==c)
        printf("%d ", d-e);
    if (a*b==c)
        printf("%d ", d*e);
    if (a/b==c)
        printf("%d ", d/e);
    if (a+b != c && a-b != c && a*b != c && a/b != c)
        printf("NO");
}