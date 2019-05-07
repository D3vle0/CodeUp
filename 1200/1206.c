#include <stdio.h>
int main() {
    int a, b, c = 0;
    scanf("%d %d", &a, &b);
     
    if (b%a == 0) {
        c = b / a;
        printf("%d*%d=%d", a, c, b);
    }
    else if (a%b == 0) {
        c = a / b;
        printf("%d*%d=%d", b, c, a);
    }
    else
        printf("none");
 
}