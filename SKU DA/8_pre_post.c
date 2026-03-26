//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_STACK_SIZE 100
//typedef double Element;
//
//Element data[MAX_STACK_SIZE];
//int top;
//
//void init_stack() {
//    top = -1;
//}
//
//int is_empty() {
//    return (top == -1);
//}
//
//void push(Element e) {
//    if (top == MAX_STACK_SIZE - 1) {
//        printf("Stack overflow\n");
//        return;
//    }
//    data[++top] = e;
//}
//
//Element pop() {
//    if (is_empty()) {
//        printf("Stack underflow\n");
//        exit(1);
//    }
//    return data[top--];
//}
//
//double calc_postfix(char expr[]) {
//    int i = 0;
//    char c;
//    double val, val1, val2;
//
//    init_stack();
//
//    while (expr[i] != '\0') {
//        c = expr[i++];
//        if (c == ' ') continue;
//
//        if (c >= '0' && c <= '9') {
//            val = c - '0';
//            push(val);
//        }
//
//        else if (c == '+' || c == '-' || c == '*' || c == '/') {
//            val2 = pop();
//            val1 = pop();
//
//            switch (c) {
//            case '+': push(val1 + val2); break;
//            case '-': push(val1 - val2); break;
//            case '*': push(val1 * val2); break;
//            case '/': push(val1 / val2); break;
//            }
//        }
//    }
//    //val1 = pop(); // underflow error
//    return pop();
//}
//
//int main() {
//    printf("20251310_WaiYanNaung\n\n");
//    char expr1[] = "9 3 / 4 2 - * 3 + 5 -";
//    char expr2[] = "4 2 * 3 2 * - 5 + 4 - 3 5 * +";
//
//    printf("Exp: %s = %lf\n", expr1, calc_postfix(expr1));
//    printf("Exp: %s = %lf\n", expr2, calc_postfix(expr2));
//
//    return 0;
//}