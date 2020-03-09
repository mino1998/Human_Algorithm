#include <stdio.h>

int factorial(int a) {
	if (a == 1)
		return 1;
	else if (a > 1) {
		return a*factorial(a - 1);
	}
}

int main() {
	int A;
	scanf("%d", &A);
	int factA = 0;
	factA = factorial(A);
	printf("%d", factA);
	return 0;
}