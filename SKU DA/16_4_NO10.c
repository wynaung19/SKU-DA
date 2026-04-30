//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX 100
//
//typedef struct {
//    int data[MAX];
//    int top;
//} Stack;
//
//typedef struct {
//    Stack s1;
//    Stack s2;
//} Queue;
//
//void initStack(Stack* s) {
//    s->top = -1;
//}
//
//void initQueue(Queue* q) {
//    initStack(&q->s1);
//    initStack(&q->s2);
//}
//
//int isEmpty(Stack* s) {
//    return s->top == -1;
//}
//
//void push(Stack* s, int value) {
//    if (s->top == MAX - 1)
//		printf("Stack Overflow!\n");
//	else
//        s->data[++(s->top)] = value;
//}
//
//int pop(Stack* s) {
//    if (isEmpty(s)) return -1;
//    return s->data[(s->top)--];
//}
//
//void enqueue(Queue* q, int value) {
//    push(&q->s1, value);
//    printf("Enqueue: %d\n", value);
//}
//
//int dequeue(Queue* q) {
//    if (isEmpty(&q->s2)) {
//		printf("s2 is empty, Moving\n");
//        while (!isEmpty(&q->s1)) {
//			printf("Moving %d\n", q->s1.data[q->s1.top]);
//            push(&q->s2, pop(&q->s1));
//        }
//    }
//	//Check if still empty after moving
//    if (isEmpty(&q->s2)) {
//        printf("Queue is empty\n");
//        return -1;
//    }
//    return pop(&q->s2);
//}
//
//int main() {
//    Queue q;
//    initQueue(&q);
//    enqueue(&q, 1);
//    enqueue(&q, 2);
//    printf("Dequeue: %d\n", dequeue(&q));
//    enqueue(&q, 3);
//    printf("Dequeue: %d\n", dequeue(&q));
//    printf("Dequeue: %d\n", dequeue(&q));
//
//    return 0;
//}