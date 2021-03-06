#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    int n;
    cin >> n;
    int a[n+1],b[n+1];
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if(a[i] == a[j]) {
				count++;	
			}
			if(b[i] == b[j]) {
				count++;	
			}
			if((a[i]-b[i])==(a[j]-b[j])) {
				count++;
			}
		}
	}
	if (count == 0) cout << "no";
	else cout << "yes";
	return 0;
}
