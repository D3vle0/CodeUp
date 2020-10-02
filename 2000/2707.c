#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=2;i<=50000;i++){
        for (int j=1;j<=50000;j++){
            if (pow(i, j) > n)
                break;
            else if (pow(i,j)==n){
                printf("%d",i);
                return 0;
            }
        }
    }
}