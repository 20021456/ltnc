#include <iostream>
#include <cmath>
using namespace std;
int SNT(int x)
{
    if (x < 2)
    {
        return 0;
    }
    int count = 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    int min = 1000;
    int max = -1000;
    for (int i = 2; i < n / 2; i++)
    {
        if (SNT(i) == 1 && SNT(n - i) == 1)
        {
            if (min > i)
            {
                min = i;
                max = n - i;
            }
        }
    }
    if (min != 1000)
        cout << min << " " << max;
    else
        cout << "-1";
    return 0;
}