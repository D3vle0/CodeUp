#include <stdio.h>
int a, n;
long long int pow(long long int x, long long int y){
    if (x == 1) return 1;
    long long int sum=1;
    for (long long int i=0;i<y;i++){
        sum*=x;
    }
    return sum;
}
int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}