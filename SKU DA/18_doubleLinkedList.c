//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int Element;
//
//typedef struct DbLinkedNode {
//	Element data;
//	struct DbLinkedNode* prev;
//	struct DbLinkedNode* next;
//} Node;
//Node org;
//
//void insert_next(Node* current, Element data) {
//	Node* new_node = (Node*)malloc(sizeof(Node));
//	new_node->data = data;
//	new_node->prev = current;
//	new_node->next = current->next;
//	if (current->next != NULL) {
//		current->next->prev = new_node;
//	}
//	current->next = new_node;
//}
//
//void remove_current(Node* current) {
//	if (current->prev != NULL) {
//		current->prev->next = current->next;
//	}
//	if (current->next != NULL) {
//		current->next->prev = current->prev;
//	}
//	free(current);
//}
//
//void init_list() { org.next = NULL; org.prev = NULL; }
//
//Node* get_head() { return org.next; }
//
//int is_empty() { return org.next == NULL; }
//
//Node* get_entry(int index) {
//	Node* n = &org;
//	for (int i = -1; n != NULL; n = n->next) {
//		if (i == index) {
//			break;
//		}
//		i++;
//	}
//	return n;
//}
//
//void replace(int pos, Element val) {
//	Node* n = get_entry(pos);
//	if (n != NULL) {
//		n->data = val;
//	}
//}
//
//int size() {
//	int count = 0;
//	for (Node* n = org.next; n != NULL; n = n->next) {
//		count++;
//	}
//	return count;
//}
//
//Node* find(Element val) {
//	for (Node* n = org.next; n != NULL; n = n->next) {
//		if (n->data == val) {
//			return n;
//		}
//	}
//	return NULL;
//}
//
//void pirnt_list() {
//	for (Node* n = org.next; n != NULL; n = n->next) {
//		printf("%d ", n->data);
//	}
//	printf("\n");
//}
//
//void main() {
//	init_list();
//	insert_next(&org, 10);
//	insert_next(&org, 20);
//	insert_next(&org, 30);
//	pirnt_list();
//	Node* n = find(30);
//	if (n != NULL) {
//		printf("Found: %d\n", n->data);
//	}
//	else {
//		printf("Not found\n");
//	}
//	remove_current(n);
//	pirnt_list();
//}