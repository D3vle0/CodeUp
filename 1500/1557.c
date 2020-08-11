#include <stdio.h>

int n;
int f(int x){
    int cnt=0;
    for (int i=1;i<=x;i++)
        if (x%i==0) cnt++;
    return cnt;
}
int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}