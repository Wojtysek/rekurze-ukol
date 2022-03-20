#include <stdio.h>

long bunky(int x) {
	if (x <= 1) return 1;
	else return 2 * bunky(x - 1);
}

long fibonacci(int x) {
	if (x == 0) return 0;
	else if (x <= 1) return 1;
	else return fibonacci(x - 1) + fibonacci(x - 2);
}

float urok(int x) {
	if (x <= 1) return x * 1.01;
	else return urok(x - 1) * 1.01;
}

int main() {

	printf("bunky:\n");
	printf("%d\n", bunky(1));
	printf("%d\n", bunky(2));
	printf("%d\n", bunky(3));
	printf("%d\n", bunky(4));
	printf("%d\n", bunky(5));
	printf("%d\n", bunky(6));
	printf("%d\n", bunky(7));
	printf("\n");
	printf("fibo.:\n");
	printf("%d\n", fibonacci(1));
	printf("%d\n", fibonacci(2));
	printf("%d\n", fibonacci(3));
	printf("%d\n", fibonacci(4));
	printf("%d\n", fibonacci(5));
	printf("%d\n", fibonacci(6));
	printf("%d\n", fibonacci(7));
	printf("%d\n", fibonacci(8));
	printf("\n");
	printf("urok:\n");
	printf("%g\n", urok(1));
	printf("%g\n", urok(2));
	printf("%g\n", urok(3));
	printf("%g\n", urok(4));
}