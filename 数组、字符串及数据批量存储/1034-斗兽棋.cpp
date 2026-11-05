#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string a[4] = {"elephant", "tiger", "cat", "mouse"};
    int m = -1, n = -1;
    for (int i = 0; i < 4; i++) {
        if (s1 == a[i]) m = i;
        if (s2 == a[i]) n = i;
    }
    if (m == n) {
        cout << "tie" << endl;
    } else {
        if ((m + 1) % 4 == n) {
            cout << "win" << endl;
        } 
        else if ((n + 1) % 4 == m) {
            cout << "lose" << endl;
        } else {
            cout << "tie" << endl;
        }
    }
    return 0;
}