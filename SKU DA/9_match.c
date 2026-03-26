//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_STACK_SIZE 100
//typedef char Element;
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
//        exit(1);
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
//int check_matching(char expr[]) {
//    int i = 0;
//    char ch, prev;
//
//    init_stack();
//
//    while (expr[i] != '\0') {
//        ch = expr[i++];
//
//        if (ch == '(' || ch == '[' || ch == '{') {
//            push(ch);
//        }
//
//        else if (ch == ')' || ch == ']' || ch == '}') {
//            if (is_empty())
//                return 2; 
//
//            prev = pop();
//
//            if ((ch == ')' && prev != '(') ||
//                (ch == ']' && prev != '[') ||
//                (ch == '}' && prev != '{')) {
//                return 3; 
//            }
//        }
//    }
//
//    if (!is_empty())
//        return 1;
//
//    return 0;
//}
//
//int main() {
//    printf("20251310_Wai Yan Naung\n\n");
//    char expr[4][80] = {
//        "{A[(i+1)]=0;}",
//        "if((i==0) && (j==0)",
//        "A[(i+1])=0;",
//        "A[i] =f)(;"
//    };
//
//    int err;
//
//    for (int i = 0; i < 4; i++) {
//        err = check_matching(expr[i]);
//
//        if (err == 0)
//            printf("Correct: %s\n", expr[i]);
//        else
//            printf("Error: %s (Condition %d violated)\n", expr[i], err);
//    }
//
//    return 0;
//}