#include <stdio.h>
#include <string.h>
main() {
    char a[1001];
    scanf("%s", a);
    for (int i=0;i<=strlen(a);i++){
        if (a[i]>64&&a[i]<91)
            printf("%c",a[i]+32);
        else
            printf("%c",a[i]-32);
        if (a[i]>47&&a[i]<58)
            printf("%c",a[i]);
    }
}