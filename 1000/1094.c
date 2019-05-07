#include <stdio.h>
#pragma warning(disable : 4996)
 
int main()
{
 
    int n, i;
    int t[23];
    scanf("%d", &n);
 
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    for (i = n-1; i >= 0; i--)
    {
        printf("%d ", t[i]);
    }
}