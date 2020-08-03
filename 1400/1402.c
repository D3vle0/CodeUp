#include <stdio.h>
int main() {
    int num;
    int arr[1001];

    scanf("%d", &num);
    for (int i=0;i<num;i++)
        scanf("%d", &arr[i]);
    for (int i=0;i<num;i++)
        printf("%d ", arr[num-1-i]);
}