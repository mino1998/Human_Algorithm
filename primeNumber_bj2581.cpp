#include <stdio.h>

int main() {
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);
	int i = 0;
	int j = 0;
	int check = 0;
	int sum = 0;
	int min = 0;
	for (i = A; i <= B; i++) {
		j = 0;
		check=0;
		for (j = 1; j <= i; j++) {
			if (i%j == 0) {
				check++;
			}
		}
		if (check == 2) {
			sum += i;
		}
	}
	if (sum == 0) {
		printf("-1");
		return 0;
	}
	for (i = A; i <= B; i++) {
		j = 0;
		check = 0;
		for (j = 1; j <= i; j++) {
			if (i%j == 0) {
				check++;
			}
		}
		if (check == 2) {
			min = i;
			break;
		}

	}
	printf("%d\n", sum);
	printf("%d\n", min);
	return 0;
}