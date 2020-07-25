#include <stdio.h>
int main()
{
    int a[10];
    int cnt[100]={0};
    int sum=0,i;
    int max=0;
    int x;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        cnt[a[i]]++;
    }
    for(i=0;i<=9;i++)
    {
        if(cnt[a[i]]>max)
        {
            max=cnt[a[i]];
            x=a[i];
        }
    }
    printf("%d\n%d",sum/10,x);
    return 0;
}