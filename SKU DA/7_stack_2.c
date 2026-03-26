//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_STACK_SIZE 100
//
//typedef struct {
//    int id;
//    char name[32];
//    char dept[32];
//} Student;
//
//typedef Student Element;
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
//int is_full() {
//    return (top == MAX_STACK_SIZE - 1);
//}
//
//void push(Element e) {
//    if (is_full()) {
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
//void print_stack(char msg[]) {
//    printf("%s [%d]\n", msg, top + 1);
//    for (int i = 0; i <= top; i++) {
//        printf("ID: %d | Name: %7s | Dept: %4s\n",
//            data[i].id, data[i].name, data[i].dept);
//    }
//    printf("\n");
//}
//
//Student get_student(int id, char* name, char* dept) {
//    Student s;
//    s.id = id;
//    strcpy(s.name, name);
//    strcpy(s.dept, dept);
//    return s;
//}
//
//int main() {
//	printf("20251310_WaiYanNaung\n\n");
//    init_stack();
//
//    push(get_student(1001, "Wai", "CS"));
//    push(get_student(1002, "Yan", "EE"));
//    push(get_student(1003, "Naung", "NE"));
//    push(get_student(1004, "Hsu", "Law"));
//    push(get_student(1005, "Hlaing", "FL"));
//
//    print_stack("After adding 5 stu");
//    pop();
//    print_stack("After removing 1 stu");
//
//    return 0;
//}