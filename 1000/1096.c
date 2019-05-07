#include<stdio.h>
int main()
{
    int n, a[19][19]={0}, i, j, b, c;
    scanf("%d", &n);
     
    for(i=0;i<n;i++){
        scanf("%d %d", &b, &c);
        a[b-1][c-1]=1;
    }
    for(i=0;i<19;i++){
        for(j=0;j<19;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}