#include <stdio.h>
int main() {
    int data_num, i=0; //data_num 은 홀수
    int data[100];
    
    scanf("%d", &data_num);
    for (i=0;i<data_num;i++){
    	scanf("%d", &data[i]);
	}
	printf("%d %d %d", data[0], data[data_num/2], data[data_num-1]);
}