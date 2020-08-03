#include <stdio.h>
int main() {
    int num;
    int arr[101], max_arr[50];
    for (int i=0;i<num;i++)
        scanf("%d", &arr[i]);
    for (int i=0;i<num;i++){
        if (i%2==1)
            continue;
        else {
            if (arr[i] > arr[i+1])
                max_arr[i]=arr[i];
        }
    }
}