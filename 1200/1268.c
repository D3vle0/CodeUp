#include <stdio.h>
int main() {
    int n, arr[1000000]={0}, cnt=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for (int i=0;i<n;i++)
        if (arr[i]%2==0)
            cnt++;
    printf("%d", cnt);
}