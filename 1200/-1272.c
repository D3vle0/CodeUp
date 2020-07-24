#include <stdio.h>
int main() {
    int a,b,sum=0;
    scanf("%d %d", &a, &b);
    if (a%2)
        sum+=a*2-1;
    else
        sum+=(a-1)*10;
    if (b%2)
        sum+=b;
    else
        sum+=(b-1)*10;
    // sum+=a%2?a*2-1:(a-1)*10;
    // sum+=b%2?b*2-1:(b-1)*10;
    printf("%d", sum);
}