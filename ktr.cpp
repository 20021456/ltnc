#include <iostream>
#include <math.h>
using namespace std;

// Sinh viên viết code vào đây 
struct Point {
    int x1,y1;
    Point() {
        x1 = 0; 
        y1 = 0;
    }
    Point (int x, int y) {
        x1 = x;
        y1 = y;
    }
};
class Circle {
    Point p1;
    int r1;
    Circle (Point)
}

int main(){
    //CHÚ Ý: Sinh viên không được sửa đổi nội dung hàm main
    //các chương trình sửa đổi hàm main sẽ không được tính điểm dù đúng tất cả test
    
    int x1, y1, x2, y2, r1, r2;
    do { // check r > 0
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    } while (r1 <= 0 || r2 <= 0);
    Point p1(x1, y1);
    Circle c1(p1, r1);
    Point p2(x2, y2);
    Circle c2(p2, r2);
  
    bool result = c1.contain(c2);
    cout << std::boolalpha;
    cout << result << endl;
    return 0;
}