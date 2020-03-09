#include <stdio.h>

int main() {
	int a, b, c;
	for (;;) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			return 0;
		int max = 0, mid = 0, min = 0;
		if (a - b > 0) {
			if (a - c > 0 && b - c > 0) {
				max = a, mid = b, min = c;
			}
			else if (c - a > 0) {
				max = c, mid = a, min = b;
			}
			else if (a - c > 0 && c - b > 0) {
				max = a, mid = c, min = b;
			}
		}
		else if (b - a > 0) {
			if (b - c > 0 && a - c > 0) {
				max = b, mid = a, min = c;
			}
			else if (c - b > 0) {
				max = c, mid = b, min = a;
			}
			else if (b - c > 0 && c - a > 0) {
				max = b, mid = c, min = a;
			}
		}
		if (max*max == mid * mid + min * min)
			printf("right\n");
		
		else
			printf("wrong\n");
	}
	return 0;
}