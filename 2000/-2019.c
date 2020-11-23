#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double D=(b*b) + (-4*a*c);
    if (D==0)
        printf("%.2f", -b/(2*a));
    else if (D>0){
        printf("%.2f+%.2f\n%.2f-%.2f", -b/(2*a), sqrt(D)/(2*a), -b/(2*a), sqrt(D)/(2*a));
    }
    else {
        printf("%.2f+%.2fi\n%.2f-%.2fi", -b/(2*a), sqrt(abs(D))/(2*a), -b/(2*a), sqrt(abs(D))/(2*a));
    }
}