#include <stdio.h>

int main() {
	int n;
	int H, W, N;
	int i = 1, j = 1;
	int k = 0;
	int human = 0;
	scanf("%d", &n);
	for (k = 0; k < n; k++) {
		scanf("%d %d %d", &H, &W, &N);
		for (i; i < W+1; i++) {
			for (j; j < H+1; j++) {
				human++;
				if (human == N) {
					printf("%d\n", j * 100 + i);
				}
			}
			j = 1;
		}
		i = 1;
		j = 1;
		human = 0;
	}
	return 0;
}