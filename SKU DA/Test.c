//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node {
//	int data;
//	struct node *link;
//}Node;
//
//Node* input(int val) {
//	Node* p = (Node*)malloc(sizeof(int));
//	p->data = val;
//	p->link = NULL;
//	return p;
//}
//
//int main(void) {
//	printf("20251310_WaiYanNaung\n\n");
//	//int* pi = (int*)malloc(sizeof(int) * 2);
//	//pi[0] = 10;
//	//pi[1] = 4;
//	//printf("%d , %d\n", pi[0], pi[1]);
//	//*pi = 11; // same as pi[0] = ...;
//	//*(pi + 1) = 14;
//	//printf("%d , %d\n", pi[0], pi[1]);
//
//	/*Node* p = (Node*)malloc(sizeof(int));
//	Node* p1 = (Node*)malloc(sizeof(int));
//
//	p->data = 10;
//	p->link = p1;
//	printf("0 %d %0x %0x\n", p->data, p->link,p1);
//
//	p1->data = 20;
//	p1->link = NULL;
//	printf("1 %d %0x\n", p1->data, p1->link);*/
//
//	Node* re;
//	re = input(1);
//	printf("%d %0x", re->data, re->link);
//	return 0;
//}