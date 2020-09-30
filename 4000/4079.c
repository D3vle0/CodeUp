#include <stdio.h>
#include <string.h>
int main() {
    char str[201];
    gets(str);
    /* lowercase */
    for (int i=0;i<strlen(str);i++)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;

    /* capitalize first letter */        
    if (str[0] >= 97 && str[0] <= 122)
        str[0] -= 32;
    
    /* capitalize 'i' */
    for (int i=0;i<strlen(str)-1;i++)
        if (str[i] == ' ' && str[i+1] == 'i' && str[i+2] == ' ')
            str[i+1] = 'I';
        else if (str[i] == ' ' && str[i+1] == 'i' && (str[i+2] == '!' || str[i+2] == '.' || str[i+2] == '?'))
            str[i+1] = 'I';
            
    /* change number to alphabet */
    for (int i=0;i<strlen(str);i++){
        switch (str[i]){
            case '0': printf("zero"); break;
            case '1': printf("one"); break;
            case '2': printf("two"); break;
            case '3': printf("three"); break;
            case '4': printf("four"); break;
            case '5': printf("five"); break;
            case '6': printf("six"); break;
            case '7': printf("seven"); break;
            case '8': printf("eight"); break;
            case '9': printf("nine"); break;

            default: printf("%c", str[i]);
        }
    }
}