#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<double>> a(m,vector<double>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int k;
    cin >> k;
    double sum = 0;
    for (int j = 0;j < n; j++) {
        sum += a[k][j];
    }
    cout << fixed << setprecision(2) << sum;
    system("pause");
}