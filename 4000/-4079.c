#include <stdio.h>
#include <string.h>
int main() {
    char str[201];
    //char change[201];
    gets(str);
    for (int i=0;i<strlen(str);i++){
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
    if (str[0] >= 97 && str[0] <= 122)
        str[0] -= 32;
    // for (int i=0;i<strlen(str)-1;i++){
        
    // }
    printf("%s", str);
}