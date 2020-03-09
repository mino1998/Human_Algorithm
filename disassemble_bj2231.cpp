#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int dis = 0;
	int result = 0;
	for (int i = 1;i<n ; i++) {
		int newI = i;
		for (;;) {
			dis += newI % 10;
			if (newI / 10 == 0) {
				break;
			}
			else
				newI /= 10;
		}
		if (dis+i == n) {
			result = i;
			break;
		}
		dis = 0;
	}
	printf("%d", result);
	return 0;
}