//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_STACK_SIZE 100
//typedef char Element;
//
//Element data[MAX_STACK_SIZE];
//int top = -1;
//
//void init_stack() { top = -1; }
//
//int is_empty() { return (top == -1); }
//
//int is_full() { return (top == MAX_STACK_SIZE - 1); }
//
//void push(Element e) {
//    if (is_full()) {
//        printf("Stack overflow error\n");
//        exit(1);
//    }
//    data[++top] = e;
//}
//
//Element pop() {
//    if (is_empty()) {
//        printf("Stack underflow error\n");
//        exit(1);
//    }
//    return data[top--];
//}
//
//Element peek() {
//    if (is_empty()) {
//        printf("Stack empty error\n");
//        exit(1);
//    }
//    return data[top];
//}
//
//int precedence(char op) {
//    switch (op) {
//    case '(': case ')': return 0;
//    case '+': case '-': return 1;
//    case '*': case '/': return 2;
//    }
//    return -1;
//}
//
//void infix_to_postfix(char expr[]) {
//    int i = 0;
//    char c, op;
//
//    init_stack();
//
//    while (expr[i] != '\0') {
//        c = expr[i++];
//
//        if (c >= '0' && c <= '9') {
//            printf("%c ", c);
//        }
//        else if (c == '(') {
//            push(c);
//        }
//        else if (c == ')') {
//            while (!is_empty()) {
//                op = pop();
//                if (op == '(') break;
//                printf("%c ", op);
//            }
//        }
//        else if (c == '+' || c == '-' || c == '*' || c == '/') {
//            while (!is_empty()) {
//                op = peek();
//                if (precedence(c) <= precedence(op)) {
//                    printf("%c ", op);
//                    pop();
//                }
//                else break;
//            }
//            push(c);
//        }
//    }
//
//    while (!is_empty()) {
//        printf("%c ", pop());
//    }
//
//    printf("\n");
//}
//
//int main() {
//    printf("20251310_WaiYanNaung\n\n");
//    char expr[2][80] = { "8/2-3+(3*2)", "1/2*4*(1/4)" };
//
//    printf("Infix: %s ==> Postfix: ", expr[0]);
//    infix_to_postfix(expr[0]);
//
//    printf("Infix: %s ==> Postfix: ", expr[1]);
//    infix_to_postfix(expr[1]);
//
//    return 0;
//}