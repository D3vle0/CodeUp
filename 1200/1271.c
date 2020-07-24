#include <stdio.h>
int main() {
    int n, arr[1000];
    int max=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for (int i=0;i<n;i++)
        if (arr[i]>max)
            max=arr[i];
    printf("%d",max);

}