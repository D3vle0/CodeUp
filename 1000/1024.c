#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    scanf("%s", a);
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        printf("\'%c\'\n", a[i]);
    }
}