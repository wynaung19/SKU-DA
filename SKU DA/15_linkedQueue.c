//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int Element;
//
//typedef struct Node {
//    Element data;
//    struct Node* link;
//} Node;
//
//Node* front = NULL;
//Node* rear = NULL;
//
//int is_empty() {
//    return (front == NULL);
//}
//
//void enqueue(Element e) {
//    Node* p = (Node*)malloc(sizeof(Node));
//    p->data = e;
//    p->link = NULL;
//
//    if (is_empty()) {
//        front = rear = p;
//    }
//    else {
//        rear->link = p;
//        rear = p;
//    }
//}
//
//Element dequeue() {
//    if (is_empty()) {
//        printf("Queue Empty Error\n");
//        exit(1);
//    }
//
//    Node* p = front;
//    Element e = p->data;
//    front = p->link;
//
//    if (front == NULL)
//        rear = NULL;
//
//    free(p);
//    return e;
//}
//
//void destroy_queue() {
//    while (!is_empty())
//        dequeue();
//}
//
//void print_queue() {
//    Node* p = front;
//    printf("Queue: ");
//    while (p != NULL) {
//        printf("%d -> ", p->data);
//        p = p->link;
//    }
//    printf("NULL\n");
//}
//
//int main() {
//    printf("20251310_WaiYanNaung\n\n");
//    for (int i = 1; i <= 5; i++)
//        enqueue(i);
//
//    print_queue();
//
//    printf("Dequeue: %d\n", dequeue());
//    printf("Dequeue: %d\n", dequeue());
//
//    print_queue();
//
//    destroy_queue();
//    print_queue();
//
//    return 0;
//}