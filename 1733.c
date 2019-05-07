#include <stdio.h>
int main()
{
    char a[20];
    scanf("%s", a);
    if(a[0]=='I'&&a[1]=='O'&&a[2]=='I'&&a[3]=='\0')
    {
        printf("IOI is the International Olympiad in Informatics.");
    }
    else
    {
        printf("I don't care.");
    }
    return 0;
}