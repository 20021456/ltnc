#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1002][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i][0] == 0  && a[i][1] > 30 && a[i][2] == 1) {
            count++;
        }
    }
    cout << count;
}