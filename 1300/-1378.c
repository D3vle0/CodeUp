#include <stdio.h>
int main() {
    int a,sum=0;
    scanf("%d", &a);
    for (int i=1;i<a;i++)
        sum+=(a*(a+1))/2;
    printf("%d", sum);
}
