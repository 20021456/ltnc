#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int checkprime(int n) {
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int squareRoot = (int) sqrt(n);
    int i;
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (checkprime(i))
            cout << i <<' ';
    }
    return 0;
}
