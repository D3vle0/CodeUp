#include <stdio.h>
int main() {
    int mem[10000001];
    int search[10000001];
    int result[10000001]={ 0 };
    int N, M;
    scanf("%d", &N);
    for (int i=0;i<N;i++){
        scanf("%d", &mem[i]);
    }
    scanf("%d", &M);
    for (int i=0;i<M;i++){
        scanf("%d", &search[i]);
    }
    for (int i=0;i<M;i++){
        result[i]=0;
        for (int j=0;j<N;j++){
            if (search[i]==mem[j]){
                result[i]=1;
                break;
            }
        }
    }
    for (int i=0;i<M;i++)
        printf("%d ", result[i]);
}