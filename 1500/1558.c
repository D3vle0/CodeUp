#include <stdio.h>

long long int n;
long long int f(long long int a){
    long long int r=0;
    while (a) {
        r = (r * 10) + (a % 10);
        a = a / 10;
    }
    return r;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}