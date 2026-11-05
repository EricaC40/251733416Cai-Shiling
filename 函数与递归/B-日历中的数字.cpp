#include <bits/stdc++.h>
using namespace std;
bool getyear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int getmonth(int year, int month) {
    if (month == 2) {
        return getyear(year) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}
int countdigit(int num, int digit) {
    string s = (num < 10 ? "0" : "") + to_string(num);
    int cnt = 0;
    for (char c : s) {
        if (c - '0' == digit) cnt++;
    }
    return cnt;
}
int countyear(int year, int digit) {
    string s = to_string(year);
    int cnt = 0;
    for (char c : s) {
        if (c - '0' == digit) cnt++;
    }
    return cnt;
}
int main() {
    int y, m, x;
    while (cin >> y >> m >> x) {
        int M = getmonth(y, m);
        int Y = countyear(y, x);
        int total = Y * M;
        int monthCount = countdigit(m, x);
        total += monthCount * M;
        for (int day = 1; day <= M; day++) {
            total += countdigit(day, x);
        }
        cout << total << endl;
    }
    return 0;
}