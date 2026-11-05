#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (char c : s) {
        if (c == '5') {
            cout << '*';
        } 
        else {
            cout << c;
        }
    }
    return 0;
}