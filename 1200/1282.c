#include <stdio.h>
#include <math.h>
int main() {
    int n;
    double root;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        root=sqrt(n-i);
        if (root == (int)root){
            printf("%d %.0f\n",i,root);
            break;
        }
    }
}