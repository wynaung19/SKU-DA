#include <stdio.h>

#define MAX_ELEMENTS 100
int score[MAX_ELEMENTS];

int find_max(int n) {
	int i, tmp;
	tmp = score[0];
	for (i = 1;i < n;i++) {
		if (score[i] > tmp) {
			tmp = score[i];
		}
	}
	return tmp;
}

int main(void) {
	int n;
	printf("Number of elements: ");
	scanf("%d", &n);
	printf("Enter %d scores: ", n);
	for (int i = 0; i < n;i++) {
		scanf("%d", &score[i]);
	}
	printf("Max score is: %d", find_max(n));

	return 0;
}