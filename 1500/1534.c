#include <stdio.h>
double f(){
    return 3.1415926535897;
}
int main()
{
    printf("%.13f", f());
    return 0;
}