#include <stdio.h>
int main() {
    int first, second, k;
    scanf("%d %d %d", &first, &second, &k);
    for (int i=first;i<=k;i+=(second-first))
        printf("%d ", i);
}