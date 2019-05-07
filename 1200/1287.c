#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,x,z;
    scanf("%d",&n);
    for(i=1;i<=9;i++)
    {
        z=n*i;
        for(x=0;x<z;x++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}