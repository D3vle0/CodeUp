#include <stdio.h>
int mymax(int x,int y){
    return x>=y?x:y;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}