#include <stdio.h>

int main() {
	unsigned int res1 = 0, res2 = 0, n, i;
	
	printf("Enter N\n");
	scanf_s("%d", &n);

	for (i = 1; i < n; i++) {
		res1 = res1 + (i * 10 + 5) + (i * 10 + 7);
		res2 = res2 + 2 * i * 4;
	}

	printf("res1 = %d   res2 = %d", res1, res2)

	if (res1 = res2)
		printf("true");
	else
		printf("false");

	return 0;
}