#include <stdio.h>
#include <string.h>

//baekjoon_algorithm

//ver.1

int main() {
	char a[20];
	int num = 0;
	int i;
	scanf("%s", a);
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 65 && a[i] <= 67) {
			num += 3;
		}
		else if (a[i] >= 68 && a[i] <= 70) {
			num += 4;
		}
		else if (a[i] >= 71 && a[i] <= 73) {
			num += 5;
		}
		else if (a[i] >= 74 && a[i] <= 76) {
			num += 6;
		}
		else if (a[i] >= 77 && a[i] <= 79) {
			num += 7;
		}
		else if (a[i] >= 80 && a[i] <= 83) {
			num += 8;
		}
		else if (a[i] >= 84 && a[i] <= 86) {
			num += 9;
		}
		else if (a[i] >= 87 && a[i] <= 90) {
			num += 10;
		}
	}
	printf("%d", num);
	return 0;
}

//ver.2

int main() {
	char a[16];
	int number[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	scanf(" %s", a);
	int len = strlen(a);
	int i = 0;
	int sum = 0;
	for (i = 0; i < len; i++) {
		sum += number[a[i] - 'A'];
	}
	printf("%d\n", sum);
	return 0;
}