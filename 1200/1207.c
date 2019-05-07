#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    switch (a+b+c+d) {
        case 4:printf("윷");break;
        case 3:printf("걸");break;
        case 2:printf("개");break;
        case 1:printf("도");break;
        default:printf("모");}
}