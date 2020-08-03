#include <stdio.h>

int n, m;
int max(int x,int y) {
    return x>y?x:y;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", max(n, m));
}