#include <stdio.h>
long long int n;
#include <stdlib.h>
long long int abs(long long int x){
    if (x>=0)
        return x;
    else
        return -1*x;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}