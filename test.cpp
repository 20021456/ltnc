#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
int KTSNT(int n) {
    if (n < 2) return 0;
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        return 1;
    }else{
        return 0;
    }
}


int main() {
    int n;
    cin >> n;
    queue <int> a;
    for (int i = 2; i < n, i < 10 ; i++) {
        if (KTSNT(i)) {
            a.push(i);
        }
    }
    while (!a.empty()) {
        for (int i = 1; i <= 9; i++) {
            int k = a.front() * 10 + i;
            if (k < n && KTSNT(k)) {
                a.push(k);
            }
        }
        cout << a.front() << " ";
        a.pop();
    }
    system("pause");
}