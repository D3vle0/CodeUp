#include <stdio.h>
double x;
long long int f(double x)
{
    if (x>=0)
        return (int)x;
    else {
        if (x==(int)x)
            return (int)x;
        else
            return (int)x-1;
    }
}
int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}