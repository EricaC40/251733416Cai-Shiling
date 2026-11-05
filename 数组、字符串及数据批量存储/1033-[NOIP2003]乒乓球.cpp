#include <bits/stdc++.h>
using namespace std;
int main() {
    char r[100000];
    int len = 0;
    char ch;
    while (cin >> ch && ch != 'E') {
        if (ch == 'W' || ch == 'L') {
            r[len] = ch;
            len++;
        }
    }
    int a = 0, b = 0;
    for (int i = 0; i < len; i++) {
        if (r[i] == 'W') a++;
        else if (r[i] == 'L') b++;

        if ((a >= 11 || b >= 11) && (a - b >= 2 || b - a >= 2)) {
            cout << a << ":" << b << endl;
            a = 0;
            b = 0;
        }
    }
    cout << a << ":" << b << endl;
    cout<<endl;
    a = 0, b = 0;
    for (int i = 0; i < len; i++) {
        if (r[i] == 'W') a++;
        else if (r[i] == 'L') b++;
    
        if ((a >= 21 || b >= 21) && (a - b >= 2 || b - a >= 2)) {
            cout << a << ":" << b << endl;
            a = 0;
            b = 0;
        }
    }
    cout << a << ":" << b << endl;
    return 0;
}