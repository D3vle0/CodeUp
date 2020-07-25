#include <stdio.h>

int calc(int num, int mul, int add){
    return num*mul+add;
}

int main() {
    int a,b,c,n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    for (int i=0;i<n-1;i++)
        a=calc(a,b,c);
    printf("%d",a);
}