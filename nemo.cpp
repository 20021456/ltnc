#include<bits/stdc++.h>;
using namespace std;
int main() {
    int n;
    string temp;
    getline(cin,temp,'\n');
    n = stoi(temp);
    vector <string> a;
    for (int i = 0; i  < n; i++) {
        string s;
        getline(cin,s,'\n');
        a.push_back(s);
    }
    int count = 0;
    string s1 = "Nemo";
    for (int i = 0; i < n;i++) {
        if (a[i] == s1) {
            count = i;
        }
    }
    if (count == n - 1) {
        cout << a[n-2] << " and " << a[0];
    }
    else {
        cout << a[count - 1] << " and " << a[count + 1];
    }
    system("pause");
}