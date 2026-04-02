//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_QUEUE_SIZE 20
//typedef int Element;
//
//Element data[MAX_QUEUE_SIZE];
//int front, rear;
//
//void init_queue() {
//    front = rear = 0;
//}
//
//int is_empty() {
//    return front == rear;
//}
//
//int is_full() {
//    return (rear + 1) % MAX_QUEUE_SIZE == front;
//}
//
//void enqueue(Element val) {
//    if (is_full()) {
//        printf("Queue Overflow!\n");
//        exit(1);
//        //return;
//    }
//    rear = (rear + 1) % MAX_QUEUE_SIZE;
//    data[rear] = val;
//}
//
//Element dequeue() {
//    if (is_empty()) {
//        printf("Queue Underflow!\n");
//        exit(1);
//    }
//    front = (front + 1) % MAX_QUEUE_SIZE;
//    return data[front];
//}
//
//Element peek() {
//    if (is_empty()) {
//        printf("Queue Empty!\n");
//        exit(1);
//    }
//    return data[(front + 1) % MAX_QUEUE_SIZE];
//}
//
//int size() {
//    return (rear - front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//}
//
//void print_queue() {
//    int i = (front + 1) % MAX_QUEUE_SIZE;
//    printf("Queue: ");
//    while (i != (rear + 1) % MAX_QUEUE_SIZE) {
//        printf("%d ", data[i]);
//        i = (i + 1) % MAX_QUEUE_SIZE;
//    }
//    printf("\n");
//}
//
//int main() {
//    printf("20251310 Wai Yan Naung\n\n");
//    init_queue();
//
//    for (int i = 1; i <= 19; i++)
//        enqueue(i);
//
//    print_queue();
//
//    for (int i = 0; i < 24; i++)
//        printf("Dequeue: %d\n", dequeue());
//
//    print_queue();
//
//    return 0;
//}