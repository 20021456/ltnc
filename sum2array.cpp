#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
// void nhapmang(double a[][1001], int m, int n) {
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> a[i][j];
//         }
//     }
// }
// void xuatmang(double a[][1001], int m, int n) {
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << fixed << setprecision(2) << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
int main() {
    int m,n;
    cin >> m >> n;
    double a[1001][1001];
    double b[1001][1001];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}