#include <stdio.h>
#include <string.h>
int main()
{
    char ch[201];
    gets(ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (100 <= ch[i] && ch[i] <= 122)
            printf("%c", ch[i] - 3);
        else if (97 <= ch[i] && ch[i] <= 99)
            printf("%c", ch[i] + 23);
        else
            printf("%c", ch[i]);
    }
}