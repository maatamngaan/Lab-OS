#include <stdio.h>
int main() {
	int a;
	int sum = 0;
	int count = 0;
	while(1) {
		printf("Enter a number : ");
		scanf("%d", &a);
		if (a>0) {
			sum += a;
			count++;
		}
		else {
			break;
		}
	}
	printf("sum = %d\n", sum);
	printf("average = %f\n", (float)sum/count);
	return 0;
}
