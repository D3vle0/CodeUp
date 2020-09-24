#include<stdio.h>
int main() {
    int a[101][101] = { 0, }, n, b = 1;
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
    if(i%2==1)
        for(int j=1;j<=n;j++)
            a[j][i]=b++;
    else
        for(int j=n;j>=1;j--)
            a[j][i]=b++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}