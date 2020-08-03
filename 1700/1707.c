#include <stdio.h>
int main() {
    int arr[10],sum=0;
    int a=0,b=0;
    for (int i=0;i<10;i++)
        scanf("%d", &arr[i]);
    for (int i=0;i<10;i++)
        sum+=arr[i];
    printf("%.1f\n", (double)sum/10);
    for (int i=0;i<10;i++)
        if (arr[i] >= (double)sum/10)
            a++;
        else
            b++;
    printf("%d %d",a,b);
}