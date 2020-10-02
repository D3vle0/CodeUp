#include <stdio.h>
int main() {
    int a=100, b=100,n;
    int a_[15], b_[15];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d %d", &a_[i], &b_[i]);
    for (int i=0;i<n;i++){
        if (a_[i] < b_[i])
            a-=b_[i];
        else if (a_[i] > b_[i])
            b-=a_[i];
    }
    printf("%d\n%d",a,b);
}
