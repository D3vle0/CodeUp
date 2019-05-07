#include <stdio.h>
int main() {
    double a,b=0;
    scanf("%lf %lf", &a, &b);
    while (a<=b)
    {
        printf("%.2f ", a);
        a=a+0.01;
    }
}