#include <stdio.h>
#include <string.h>
struct student {
	//int id;
	char name[20];
	int score;
};
int main(void) {
	/*int A = 29;
	printf("%d\n", A);
	int pA = &A;
	printf("%p\n", &pA);*/
	//struct student s1 = { "Wai Yan Naung",99 };
	/*struct student s1;
	strcpy(s1.name, "Wai Yan Naung");
	s1.score = 99;*/

	//printf("%s : %d", s1.name, s1.score);
	
	//find max
	int score[5] = {6,4,8,15,9};
	int n = 5;
	int i, tmp;
	tmp = score[0];
	for (i = 1;i < n;i++) {
		if (score[i] > tmp) {
			tmp = score[i];
		}
	}
	printf("%d", tmp);
	return 0;
}