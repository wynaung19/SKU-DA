//#include <stdio.h>
//#include <stdlib.h>
//
//#define Element int
//
//typedef struct Node {
//	Element data;
//	struct Node* link;
//} Node;
//
//Node* head;
//
//void init_list() {
//	head = NULL;
//}
//
//int is_empty() {
//	return head == NULL;
//}
//
//Node* get_entry(int pos) {
//	Node* p = head;
//	int i;
//	for (i = 0; i < pos; i++, p = p->link)
//		if (p == NULL)
//			return NULL;
//	return p;
//}
//
//int size() {
//	Node* p;
//	int count = 0;
//	for (p = head; p != NULL; p = p->link)
//		count++;
//	return count;
//}
//
//void replace(int pos, Element val) {
//	Node* p = get_entry(pos);
//	if (p == NULL) {
//		printf("Position out of bounds\n");
//		return;
//	}
//	p->data = val;
//}
//
//Node* find(Element val) {
//	Node* p;
//	for (p = head; p != NULL; p = p->link)
//		if (p->data == val)
//			return p;
//	return NULL;
//}
//
//void insert_next(Node* before, Node * node) {
//	node->link = before->link;
//	before->link = node;
//}
//
//void insert(Element val) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	if (node == NULL) {
//		printf("Malloc error\n");
//		return;
//	}
//	node->data = val;
//	node->link = head;
//	head = node;
//}
//
//Node* remove_next(Node* before) {
//	if (before->link == NULL) {
//		printf("No node to remove\n");
//		return NULL;
//	}
//	Node* removed = before->link;
//	before->link = removed->link;
//	return removed;
//}
//
//void delete(int pos) {
//	Node* prev, * removed;
//	if (pos == 0 && is_empty() == 0) {
//		removed = head;
//		head = head->link;
//		free(removed);
//	}
//	else {
//		prev = get_entry(pos - 1);
//		if (prev != NULL) {
//			removed = remove_next(prev);
//			free(removed);
//		}
//	}
//}
//
//void clear_list() {
//	while (!is_empty())
//		delete(0);
//}
//
//void print_list(char * msg) {
//	Node* p;
//	printf("%s : ", msg);
//	for (p = head; p != NULL; p = p->link)
//		printf("%d ", p->data);
//	printf("\n");
//}
//
//int main(void) {
//	printf("20251310_WaiYanNaung\n\n");
//	init_list();
//	insert(10);
//	insert(20);
//	print_list("After inserting 10 and 20");
//	replace(0,100);
//	print_list("After replacing position 1 with 15");
//	Node* found = find(15);
//	if (found != NULL)
//		printf("Found node with value 15 at address %p\n", (void*)found);
//	else
//		printf("Node with value 15 not found\n");
//	delete(0);
//	print_list("After deleting position 0");
//	clear_list();
//	print_list("After clearing the list");
//	return 0;
//}