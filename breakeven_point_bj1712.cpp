#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int evenPoint = 0;
	for (evenPoint = 0; ; evenPoint++) {
		if (a + b * evenPoint < c*evenPoint) {
			break;
		}
	}
	if (b >= c) {
		evenPoint = -1;
	}
	printf("%d", evenPoint);
	return 0;
}