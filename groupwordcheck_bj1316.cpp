#include <stdio.h>
#include <string.h>

//baekjoon_algorithm

int main() {
	int n = 0;
	int i = 0;
	int gw = 0;
	int f = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		char a[100];
		scanf("%s", a);
		int len = strlen(a);
		int j = 0;
		int l = 0;
		for (j; j < len; j++) {
			for (l; l <len; l++) {
				if (a[j] == a[j + 1])
					continue;
				if (a[j] != a[j + 1]) {
					if (j >= l)
						continue;
					if (a[j] == a[l]) {
						f++;
						break;
					}
				}
			}
			l = 0;
		}
		if (f == 0)
			gw++;
		f = 0;
	}
	printf("%d", gw);
}