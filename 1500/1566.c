#include <stdio.h>
int a, n;
long long int pow(long long int x, long long int y){
    long long int sum=1;
    for (int i=0;i<y;i++){
        sum*=x;
    }
    return sum;
}
int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}