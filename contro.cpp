#include <iostream>
using namespace std;
struct connguoi{
    int tuoi;
    float vong_mot;
    float chieu_cao;
    connguoi(int t, float v1,float cc) {
        t = tuoi;
        v1 = vong_mot;
        cc = chieu_cao; 
    }
};
int main () {
    connguoi Thu(22,95,1.74);
    connguoi Thao(18,90,1.76);
    connguoi Trang(42,79,1.65);
    cout << &Thao << endl;
    system("pause");
    return 0;
}