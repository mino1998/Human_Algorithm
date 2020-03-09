#include <stdio.h>

int main() {
	int n, m = 0;
	scanf("%d %d", &n, &m);
	int arr[100];
	int sum = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			for (int z = 0; z < n; z++) {
				if (x != y && x != z && y != z) {
					if (sum < arr[x] + arr[y] + arr[z] && m>=arr[x] + arr[y] + arr[z]) {
						sum = arr[x] + arr[y] + arr[z];
					}
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}