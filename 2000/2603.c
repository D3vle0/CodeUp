#include <stdio.h>
int main() {
    int arr[10];
    for (int i=0;i<10;i++)
        scanf("%d", &arr[i]);
    for (int i=10;i>0;i--){
        for (int j=0;j<10;j++){
            if (arr[j]/10>=i)
                printf("# ");
            else
                printf("  ");
        }
        puts("");
    }
}
