#include <stdio.h>
#include <math.h>
void hanoi(int n, char A, char temp, char B) {
	if (n == 1) {
		printf("%d %d\n", A, B);
	}
	else {
		hanoi(n - 1, A, B, temp);
		printf("%d %d\n", A, B);
		hanoi(n - 1, temp, A, B);
	}
}

int main() {
	int check = 0;
	char A = 1, B = 3, temp = 2;
	int n;
	scanf("%d", &n);
	check = pow(2, n) - 1;
	printf("%d\n", check);
	hanoi(n, A, temp, B);
	return 0;
}