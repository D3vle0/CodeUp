#include <stdio.h>

int n, a, b, d[1010];
int maxi(int x,int y){
    int max=d[x],idx=x;
    for (int i=x;i<=y;i++){
        if (max < d[i]){
            max=d[i];
            idx=i;
        }   
    }
    return idx;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}