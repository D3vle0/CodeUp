#include<stdio.h>
int main()
{
    int a,i;
    for(;;)
    {
        scanf("%d",&a);
        if(a==0)
        {
            printf("0\n");
            break;
  
        }
        else{
                printf("%d\n",a);
            continue;
        }
    }
}