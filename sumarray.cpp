#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int m,n;
    cin >> m >> n;
    float a[10][10];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    // int k;
    // cin >> k;
    // double sum = 0;
    // for (int j = 0; j < m; j++) {
    //     sum += a[k-1][j];
    // }
    // cout << fixed << setprecision(2) << sum;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout <<  a[i][j] << " ";
        }
        cout << endl;
    }
}