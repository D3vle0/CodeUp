#include <stdio.h>
int main(){
    int h,m=0;

    scanf("%d %d", &h,&m);
    if (h==0 && m<30) {
        printf("23 %d", m+60-30);
        return 0;
    }
    if (m<30) {
        printf("%d %d", h-1, m+60-30);
        return 0;
    }
    printf("%d %d", h, m-30);
    return 0;
}