#include <stdio.h>

int main() {
	int x, y, W, H;
	scanf("%d %d %d %d", &x, &y, &W, &H);
	int min = 0;
	int minx = 0, miny = 0;
	if (W -x > x)
		minx = x;
	else
		minx = W - x;
	if (H -y > y) {
		miny = y;
	}
	else {
		miny = H - y;
	}
	if (minx > miny) {
		min = miny;
	}
	else {
		min = minx;
	}
	printf("%d", min);
	return 0;
}