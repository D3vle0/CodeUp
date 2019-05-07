#include <stdio.h>
int main(void){

    int a,b;
    int total=0;
    
    scanf("%d",&a);
    for(b=1;b<=a;b++){
    
        if(b%2==0){
           total=total+b;
            
        
        }
        
    }
    printf("%d",total);
}