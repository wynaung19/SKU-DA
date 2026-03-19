#include <stdio.h>
#include <string.h>
//struct Student {
//	int id;
//	char name[20];
//	double score;
//};
//
//int main(void) {
//	//struct Student s1 = { 1,"Wai",99.9 };
//	struct Student s1;
//	s1.id = 1;
//	strcpy(s1.name, "WaiYan");
//	s1.score = 99;
//	printf("%s", s1.name);
//	return 0;
//}

//Typedef --------------------------
//typedef struct {
//	int month;
//	int day;
//} Birthday;
//
//typedef struct {
//	char name[20];
//	Birthday birthday;
//}Friend;
//
//int main(void) {
//	Friend list[1000];
//	list[0].birthday.month = 4;
//	list[0].birthday.day = 4;
//	strcpy(list[0].name, "WaiYan");
//	printf("%s - %d/%d", list[0].name, list[0].birthday.month, list[0].birthday.day);
//	return 0;
//}
#define MAX_DEGREE 101

typedef struct {
	int degree;
	float coef[MAX_DEGREE];	
} Polynomial;
void print(Polynomial p, char str[]) {
	printf("\t%s",str);
	for (int i = 0; i < p.degree; i++){
		printf("%5.1f x^%d + ", p.coef[i], p.degree - i);
	}
}
Polynomial read_poly() {
	int i;
	Polynomial p;
	printf("Num : ");
	scanf("%d", &p.degree);
	printf("Enter (max %d) : ",p.degree+1);
	for (i = 0; i <= p.degree; i++) {
		scanf("%f", p.coef + i);
	}
	return p;
}
Polynomial add_poly(Polynomial a, Polynomial b) {
	int i;
	Polynomial p;
	if (a.degree > b.degree) {
		p = a;
		for (i = 0; i <= b.degree; i++) {
			p.coef[i + (p.degree - b.degree)] += b.coef[i];
		}
	}
	else {
		p = b;
		for (i = 0; i < a.degree; i++) {
			p.coef[i + (p.degree - a.degree)] += a.coef[i];
		}
	}
	return p;
}
int main(void) {
	Polynomial a, b, c;
	a = read_poly();
	b = read_poly();
	c = add_poly(a , b);
	print(a, " A = ");
	print(b, " B = ");
	print(c, " A+B = ");
	return 0;
}