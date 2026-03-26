//#include <stdio.h>
//int top;
//#define MAX_STACK_SIZE 10
//typedef int Element;
//Element data[MAX_STACK_SIZE];
//
//void init_stack() {
//	top = -1;
//}
//
//int size() {
//	return top + 1;
//}
//
//int is_empty() {
//	/*if(top == -1){
//		return 1;
//	}
//	else{
//		return 0;
//	}*/
//	return (top == -1);
//}
//
//int is_full() {
//	return (top == MAX_STACK_SIZE - 1);
//}
//
//void push(Element e) {
//	if (is_full()) {
//		erro("Stack overflow");
//	}
//	data[++top] = e;
//}
//
//Element pop() {
//	if (is_empty()) {
//		erro("Stack Underflow");
//	}
//	return data[top--];
//}
//
//Element peek() {
//	if (is_empty()) {
//		printf("Stack is empty\n");
//		exit(1);
//	}
//	return data[top];
//}
//
//void print_stack(char msg[]) {
//	int i;
//	printf("%s [%02d] =", msg, size());
//	for (i = 0; i < size(); i++)
//		printf(" %02d", data[i]);
//	printf("\n");
//}
//
//void erro(char msg[]) {
//	printf("%s\n", msg);
//	exit(1);
//}
//
//int main() {
//	printf("20251310_WaiYanNaung\n\n");
//	init_stack();
//	for (int i = 0; i < 10; i++) {
//		push(i);
//	}
//	print_stack("After push 9 times");
//	pop();
//	printf("\tpop()--> %d\n", pop());
//	print_stack("After pop 2 times");
//
//	////overflow
//	//for (int i = 0; i < 10; i++) {
//	//	push(i);
//	//}
//
//	//underflow
//	/*for (int i = 0; i < 10; i++) {
//		pop();
//	}*/
//	print_stack("FINAL");
//	return 0;
//}