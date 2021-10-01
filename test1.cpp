#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1,s2;
    cin >> s1 >> s2;
    size_t found = s2.find(s1);
    if (found == string::npos) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    cout << "trung dep trai";
    system("pause");
}
