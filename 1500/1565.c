#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}
long long int lcm(long long int p,long long int q) {
    return p*q/gcd(p,q);
}
int main()
{
  int a, b;

  scanf("%d%d", &a, &b);
  printf("%lld\n", lcm(a, b));
}