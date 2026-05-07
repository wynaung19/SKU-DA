#include <stdio.h>

// -------- 6.12 --------
typedef struct Node {
	int data;
	struct Node* link;
} Node;

Node* reverse(Node * list) {
	Node* p = list; Node* q = NULL; Node* r;
	while (p != NULL) {
		r = q; q = p; p = p->link; q->link = r;
	}
	return q;
}

int main() {
	printf("20251310_WaiYanNaung\n\n");
	Node n1 = { 5, NULL };
	Node n2 = { 6, NULL };
	Node n3 = { 7, NULL };
	n1.link = &n2;
	n2.link = &n3;
	printf("Original linked list: %d -> %d -> %d\n", n1.data, n2.data, n3.data);
	Node* reversed_list = reverse(&n1);
	printf("Reversed linked list: %d -> %d -> %d\n", reversed_list->data, reversed_list->link->data, reversed_list->link->link->data);
	return 0;
}

// -------- 6.10 --------
typedef struct Node {
	int data;
	struct Node* link;
} Node;

int count(Node* list, int value) {
	int count = 0;
	for (Node* p = list; p != NULL; p = p->link) {
		if (p->data == value) {
			count++;
		}
	}
	return count;
}

int main() {
	printf("20251310_WaiYanNaung\n\n");
	Node n1 = { 5, NULL };
	Node n2 = { 5, NULL };
	Node n3 = { 7, NULL };
	n1.link = &n2;
	n2.link = &n3;
	printf("Linked list: %d -> %d -> %d\n", n1.data, n2.data, n3.data);
	int value_to_count;
	printf("Enter value to count: ");
	scanf("%d", &value_to_count);
	int result = count(&n1, value_to_count);
	printf("Count of %d in linked list: %d\n", value_to_count, result);
	return 0;
}

// -------- 6.9 --------
typedef struct Node {
	int data;
	struct Node* link;
} Node;

int sum(Node* list) {
	int total = 0;
	for (Node* p = list; p != NULL; p = p->link) {
		total += p->data;
	}
	return total;
}

int main() {
	printf("20251310_WaiYanNaung\n\n");
	Node n1 = { 5, NULL };
	Node n2 = { 6, NULL };
	Node n3 = { 7, NULL };
	n1.link = &n2;
	n2.link = &n3;
	printf("Linked list: %d -> %d -> %d\n", n1.data, n2.data, n3.data);
	int result = sum(&n1);
	printf("Sum of linked list: %d\n", result);
	return 0;
}

// -------- 6.4 --------
void swap(int* px, int *py) {
    if (px == 0 || py == 0) {
        return;
    }
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
	printf("20251310_WaiYanNaung\n\n");
	int x = 3, y = 5;
	printf("Before swap: x = %d, y = %d\n", x, y);
	swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}