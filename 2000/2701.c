#include <stdio.h>
#include <math.h>
int main(){
    int arr[5], n;
    scanf("%d", &n);
    for (int i=0;i<5;i++)
        scanf("%d", &arr[i]);
    if (n<=arr[0])
        printf("%d", arr[0]-n);
    else if (n>=arr[4])
        printf("%d", n-arr[4]);
    else
        for (int i=0;i<4;i++)
            if (arr[i] <= n && n <= arr[i+1])
                if (abs(arr[i+1]-n) > abs(arr[i]-n))
                    printf("%d",abs(arr[i]-n));
                else
                    printf("%d",abs(n-arr[i+1]));
}