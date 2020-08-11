#include <stdio.h>

int n, k, d[1010];
int lower_bound(int x){
    for (int i=1;i<=x;i++)
        if (x<=d[i])
            return i;
    return x+1;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", lower_bound(k));
}