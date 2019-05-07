#include <stdio.h>
int main() {
	int num[1000] = { 0 };
	int a,sum=0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
	}
	printf("%d", sum);
}