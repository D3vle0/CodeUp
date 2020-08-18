#include <stdio.h>

int n, k, d[1010];
int upper_bound(int x){
    for (int i=1;i<=n;i++){
        if (x < d[i])
            return i;
    }
}
int main()
{
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%d", &d[i]);

    scanf("%d", &k);

    printf("%d\n", upper_bound(k));
}