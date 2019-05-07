#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    
    if (a==11||a==12||a==13)
        printf("%dth\n",a);
        goto ang;

    if (a%10==1)
        printf("%dst\n",a);
else  if (a%10==2)
        printf("%dnd\n",a);
else  if (a%10==3)
        printf("%drd\n",a);
else
        printf("%dth\n",a);

ang:
return 0;
}