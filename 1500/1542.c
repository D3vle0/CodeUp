#include <stdio.h>
int n;
void f(int x)
{
    int cnt=0;
    for (int i=1;i<x;i++){
        if (x%i==0)
            cnt++;
    }
    if (cnt==1)
        printf("prime");
    else
        printf("composite");
}
int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}