#include <stdio.h>
#include <math.h>
int main() {
    int x1, y1;
    int x2, y2;
    int d1, d2;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    d1=pow((x2-x1),2);
    d2=pow((y2-y1),2);

    printf("%.2f", sqrt(d1+d2));
}