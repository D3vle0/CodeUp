#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}
int mid(int p, int q, int r){
    if (p>=q){
        if (q>=r)
            return q;
        else if (p<=r)
            return p;
        else
            return r;
    }
    else if (p>=r)
        return p;
    else if (q>=r)
        return r;
    else
        return q;
}
int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}