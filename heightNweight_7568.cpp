#include <stdio.h>

int main() {
	int N = 0;
	int rank[50][3];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &rank[i][0], &rank[i][1]);
		rank[i][2] = 1;
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (rank[i][0] > rank[j][0] && rank[i][1] > rank[j][1])
				rank[j][2]++;
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", rank[i][2]);
	}
	return 0;
}