#include <iostream>
using namespace std;
struct node {
    int data; // dữ liệu chứa trong 1 cái node 
    struct node *pNext; // con trỏ dùng liên kết giữa các node với nhau
};
typedef struct node NODE; // thay thế struct node thành NODE

// khai báo cấu trúc của danh sách liên kết đơn 
struct list {
    NODE *pHead; // node đầu quản lí đầu danh sách 
    NODE *pTail; // node cuối quản lí cuối danh sách    
};
typedef struct list LIST;
void khoitao(LIST &l) {
    l.pTail = NULL;
    l.pHead = NULL;
}
// hàm khởi tạo một cái node 
NODE * khoitaoNode(int x) {
    NODE *p = new NODE; //cấp phát vùng nhớ cho NODE
    p -> data = x;
    p -> pNext = NULL;
    return p; 
}
// hàm thêm node vào đầu danh sách 
void themvaodau(LIST &l, NODE *p) {
    // danh sách đang rỗng 
    if (l.pHead == NULL) {
        l.pHead = l.pTail = p;
    }
    else {
        p -> pNext = l.pHead;
        l.pHead = p;
    }
}
int main() {

    system("pause");
}