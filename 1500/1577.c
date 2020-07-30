#include <stdio.h>
int myabs(int x){
    return x>=0?x:-x;
}
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
}