#include <stdio.h>
int main() {
    int n, arr[1000000]={0}, sum=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for (int i=0;i<n;i++)
        if (arr[i]%5==0)
            sum+=arr[i];
    printf("%d", sum);
}