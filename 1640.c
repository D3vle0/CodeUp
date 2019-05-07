#include <stdio.h>
#include <string.h>
int main()
{
    char a[101][51];
    char x[] = "tap";
    char y[] = "xocure";
    int n, sum=0;
    scanf("%d\n", &n);
    int i;
    char *p;
    for(i=0;i<n;i++){
        gets(a[i]);
    }
    for(i=0;i<n;i++){
        if(strlen(a[i])<=3){
            printf("%s\n", a[i]);
            sum++;
            continue;
        }
        p=strstr(a[i], x);
        if(p==NULL)
        {
            p=strstr(a[i], y);
            if(p==NULL){
                continue;
            }
            else{
                printf("%s\n", a[i]);
                sum++;
                continue;
            }
        }
        else{
            printf("%s\n", a[i]);
            sum++;
            continue;
        }
        p=strstr(a[i], y);
        if(p==NULL){
            p=strstr(a[i], x);
            if(p==NULL){
                continue;
            }
            else{
            printf("%s\n", a[i]);
            sum++;
            continue;
            }
        }
        else{
            printf("%s\n", a[i]);
            sum++;
            continue;
        }
    }
    if(sum<=3){
        printf("safe");
    }
    else if(sum>=4&&sum<=6){
        printf("warning");
    }
    else if(sum>=7){
        printf("danger");
    }
    return 0;
}