#include <stdio.h>

int fibo(int a) {
	if (a == 0)
		return 0;
	else if (a == 1)
		return 1;
	else if (a > 0)
		return fibo(a - 1) + fibo(a - 2);
}

int main() {
	int n;
	scanf("%d", &n);
	int fiboN;
	fiboN = fibo(n);
	printf("%d", fiboN);
	return 0;
}