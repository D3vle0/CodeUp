#include <stdio.h>

long long int n, m;
long long int f(long long int a, long long int b){
    return a>b?a-b:b-a;
}
int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}