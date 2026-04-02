//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_QUEUE_SIZE 100
//typedef int Element;
//
//Element data[MAX_QUEUE_SIZE];
//int front, rear;
//
//void init_deque() {
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
//void add_rear(Element val) {
//    if (is_full()) {
//        printf("Deque Overflow!\n");
//        return;
//    }
//    rear = (rear + 1) % MAX_QUEUE_SIZE;
//    data[rear] = val;
//}
//
//void add_front(Element val) {
//    if (is_full()) {
//        printf("Deque Overflow!\n");
//        return;
//    }
//    data[front] = val;
//    front = (front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//}
//
//Element delete_front() {
//    if (is_empty()) {
//        printf("Deque Underflow!\n");
//        exit(1);
//    }
//    front = (front + 1) % MAX_QUEUE_SIZE;
//    return data[front];
//}
//
//Element delete_rear() {
//    if (is_empty()) {
//        printf("Deque Underflow!\n");
//        exit(1);
//    }
//    Element val = data[rear];
//    rear = (rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//    return val;
//}
//
//Element get_front() {
//    if (is_empty()) {
//        printf("Deque Empty!\n");
//        exit(1);
//    }
//    return data[(front + 1) % MAX_QUEUE_SIZE];
//}
//
//Element get_rear() {
//    if (is_empty()) {
//        printf("Deque Empty!\n");
//        exit(1);
//    }
//    return data[rear];
//}
//
//void print_deque() {
//    int i = (front + 1) % MAX_QUEUE_SIZE;
//    printf("Deque: ");
//    while (i != (rear + 1) % MAX_QUEUE_SIZE) {
//        printf("%d ", data[i]);
//        i = (i + 1) % MAX_QUEUE_SIZE;
//    }
//    printf("\n");
//}
//
//int main() {
//    printf("20251310_WaiYanNaung\n\n");
//    init_deque();
//
//    for (int i = 1; i <= 9; i++) {
//        if (i % 2)
//            add_front(i);
//        else
//            add_rear(i);
//    }
//
//    print_deque();
//
//    printf("delete_front: %d\n", delete_front());
//    printf("delete_rear: %d\n", delete_rear());
//    printf("delete_front: %d\n", delete_front());
//
//    print_deque();
//
//    return 0;
//}