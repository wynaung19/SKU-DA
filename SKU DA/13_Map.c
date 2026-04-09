//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAZE_SIZE 6
//#define MAX_QUEUE_SIZE 100
//
//typedef struct {
//    int x;
//    int y;
//} Location2D;
//
//typedef Location2D Element;
//char map[MAZE_SIZE][MAZE_SIZE] = {
//    { '1','1','1','1','1','1' },
//    { 'e','0','1','0','0','1' },
//    { '1','0','0','0','1','1' },
//    { '1','0','1','0','1','1' },
//    { '1','0','1','0','0','x' },
//    { '1','1','1','1','1','1' }
//};
//
//Element data[MAX_QUEUE_SIZE];
//int front = 0, rear = 0;
//
//void error(char* msg) {
//    printf("%s\n", msg);
//    exit(1);
//}
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
//    if (is_full()) error("덱 포화 에러");
//    rear = (rear + 1) % MAX_QUEUE_SIZE;
//    data[rear] = val;
//}
//
//Element delete_front() {
//    if (is_empty()) error("덱 공백 에러");
//    front = (front + 1) % MAX_QUEUE_SIZE;
//    return data[front];
//}
//
//Element delete_rear() {
//    if (is_empty()) error("덱 공백 에러");
//    Element ret = data[rear];
//    rear = (rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//    return ret;
//}
//
//Location2D getLocation2D(int x, int y) {
//    Location2D p;
//    p.x = x;
//    p.y = y;
//    return p;
//}
//
//int is_valid(int x, int y) {
//    if (x < 0 || y < 0 || x >= MAZE_SIZE || y >= MAZE_SIZE)
//        return 0;
//    return (map[y][x] == '0' || map[y][x] == 'x');
//}
//
//int DFS() {
//    int x, y;
//    Location2D here;
//
//    init_deque();
//    add_rear(getLocation2D(0, 1));
//
//    printf("DFS: ");
//
//    while (!is_empty()) {
//        here = delete_rear();
//        printf("(%2d,%2d) ", here.x, here.y);
//
//        x = here.x;
//        y = here.y;
//
//        if (map[y][x] == 'x')
//            return 1;
//
//        map[y][x] = '.';
//
//        if (is_valid(x - 1, y)) add_rear(getLocation2D(x - 1, y));
//        if (is_valid(x + 1, y)) add_rear(getLocation2D(x + 1, y));
//        if (is_valid(x, y - 1)) add_rear(getLocation2D(x, y - 1));
//        if (is_valid(x, y + 1)) add_rear(getLocation2D(x, y + 1));
//    }
//
//    return 0;
//}
//
//int BFS() {
//    int x, y;
//    Location2D here;
//
//    init_deque();
//    add_rear(getLocation2D(0, 1));
//
//    printf("BFS: ");
//
//    while (!is_empty()) {
//        here = delete_front();
//        printf("(%2d,%2d) ", here.x, here.y);
//
//        x = here.x;
//        y = here.y;
//
//        if (map[y][x] == 'x')
//            return 1;
//
//        map[y][x] = '.';
//
//        if (is_valid(x - 1, y)) add_rear(getLocation2D(x - 1, y));
//        if (is_valid(x + 1, y)) add_rear(getLocation2D(x + 1, y));
//        if (is_valid(x, y - 1)) add_rear(getLocation2D(x, y - 1));
//        if (is_valid(x, y + 1)) add_rear(getLocation2D(x, y + 1));
//    }
//
//    return 0;
//}
//
//
//int main() {
//    printf("20251310_WaiYanNaung\n\n");
//    //printf("-> %s\n", DFS() ? "성공" : "실패");
//    printf("-> %s\n", BFS() ? "성공" : "실패");
//    return 0;
//}