#include <stdio.h>
int main() {
    int a,b,i=0;
    scanf("%d %d", &a, &b);
    if (a<b){
        for(i=a;i<=b;i++)
            printf("%d ",i);
    }
    else{
        for(i=b;i<=a;i++)
            printf("%d ",i);
    }
}