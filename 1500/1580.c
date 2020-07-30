#include <stdio.h>
double circle(int x){
    return 3.14*x*x;
}
int main() {
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}