#include <stdio.h>
#include <string.h>

//baekjoon_algorithm

int main() {
	char a[1000000];
	scanf("%[^\n]s", a);
	int space = 0;
	int word = 0;
	int i = 0;
	int len = strlen(a);
	for (i = 0; i<len; i++) {
		if (a[i] == ' ')
			space++;
	}
	if (a[0] == ' ' && a[len - 1] == ' ')
		word = space - 1;
	else if (a[0] != ' ' && a[len - 1] != ' ')
		word = space + 1;
	else
		word = space;
	printf("%d", word);
	return 0;
}