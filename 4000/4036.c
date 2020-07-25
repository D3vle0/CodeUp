#include <stdio.h>
int main() {
    int a,b,x,y;
    scanf("%d", &a);
    scanf("%d", &b);
    int tmp_add=a+b;
    x=tmp_add/2;
    y=a-x;
    printf("%d\n%d",x,y);

}