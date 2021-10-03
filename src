#include <bits/stdc++.h>
using namespace std;

#include <iostream>

using namespace std;

struct Time
{
    int hour, minute, second;
    Time(int initHour, int initMinute, int initSecond)
    {
        //your code here
        hour = initHour;
        minute = initMinute;
        second = initSecond;
    }
    void getTimeDifference(Time other)
    {
        //your code here
        int h = other.hour - hour;
        int m = other.minute - minute;
        int s = other.second - second;
        if (h < 10) cout << 0 << h << ":";
        else cout << h << ":";
        if (m < 10) cout << 0 << m << ":";
        else cout << m << ":";
        if (s < 10) cout << 0 << s;
        else cout << s;
    }
};

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Time time1(hour,minute,second);
    cin >> hour >> minute >> second;
    Time time2(hour,minute,second);
    time1.getTimeDifference(time2);
    return 0;
}
