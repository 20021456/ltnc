#include <iostream>
#include <vector>
using namespace std;
int sumarray(int x) {
    int count = 0;
    while (x > 0)
    {
        count += (x% 10);
        x /= 10;
    }
    return count;
}
int check(int n) {
    int count1 = 0;
    while (n > 0)
    {
        count1++;
        n /= 10;
    }
    return count1;
}
int main() {
    int n,k;
    cin  >> n >> k;
    vector <int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (check(a[i]) == k) {
            sum += sumarray(a[i]);
        }
    }
    cout << sum;
    system("pause");
}