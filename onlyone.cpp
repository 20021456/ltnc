#include <bits/stdc++.h>
using namespace std; 
int main() {
    int n;
    cin >> n;
    vector <string> a;
    getchar();
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin,s);
        a.push_back(s);
    }
    for (int i = 0; i < n-1; i++) {
            if (a[i] == a[i+1]) {
                a.erase(a.begin()+i-1);
                a.erase(a.begin()+i);
            } 
        }
    cout << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
    system("pause");
}