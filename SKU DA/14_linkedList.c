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
//Node* top = NULL;
//
//int is_empty() {
//    return (top == NULL);
//}
//
//void push(Element e) {
//    Node* p = (Node*)malloc(sizeof(Node));
//    p->data = e;
//    p->link = top;
//    top = p;
//}
//
//Element pop() {
//    if (is_empty()) {
//        printf("Stack Empty Error\n");
//        exit(1);
//    }
//
//    Node* p = top;
//    Element e = p->data;
//    top = p->link;
//    free(p);
//    return e;
//}
//
//Element peek() {
//    if (is_empty()) {
//        printf("Stack Empty Error\n");
//        exit(1);
//    }
//    return top->data;
//}
//
//int size() {
//    Node* p;
//    int count = 0;
//    for (p = top; p != NULL; p = p->link)
//        count++;
//    return count;
//}
//
//void destroy_stack() {
//    while (!is_empty())
//        pop();
//}
//
//void print_stack() {
//    Node* p = top;
//    printf("Stack: ");
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
//        push(i);
//
//    print_stack();
//
//    printf("Pop: %d\n", pop());
//    printf("Peek: %d\n", peek());
//    printf("Size: %d\n", size());
//
//    print_stack();
//
//    destroy_stack();
//    print_stack();
//
//    return 0;
//}