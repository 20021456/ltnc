#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <double> ex;
    for (int i = 1; i <= n; i++) {
        double result = pow (i,5);
        ex.push_back(result);
    }
    for (int a = 0; a < n-4; a++) {
        for (int b = a + 1; b < n - 3; b++) {
            for (int c = b + 1; c < n - 2; c++) {
                for (int d = c + 1; d < n - 1; d++) {
                    for (int e = d + 1; e < n; e++) {
                        if (ex[a] + ex[b] + ex[c] + ex[d] == ex[e]) {
                            cout << a << "^5 + " << b << "^5 + " << c << "^5 + " << d << "^5 = " << e << "^5" << endl;
                        }
                    }
                }
            }
        }
    }
    system("pause"); 
}