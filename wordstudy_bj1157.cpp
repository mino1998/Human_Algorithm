#include <stdio.h>
#include <string.h>

//baekjoon_algorithm

int main() {
	char a[1000000];
	scanf("%s", a);
	int alpha[26] = { 0, };
	int len = strlen(a);
	int i = 0;
	int best = -99;
	int bestalpha = -999;
	int bestarray[1000000] = { 0, };
	for (i = 0; i < len; i++) {
		if (a[i] < 97)
			alpha[a[i] - 65]++;
		else if (a[i] >= 97)
			alpha[a[i] - 97]++;
	}
	for (i = 0; i < 26; i++) {
		if (best <= alpha[i]) {
			bestalpha = i;
			best = alpha[i];
			bestarray[best] ++;
		}
	}
	if (bestarray[best] > 1) {
		printf("?");
		return 0;
	}
	printf("%c", bestalpha + 65);
	return 0;
}