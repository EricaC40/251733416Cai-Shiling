#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<char> chuan;
    for (char ch : s) {
        if (ch == 'b' && !chuan.empty() && chuan.back() == 'a') {
            chuan.pop_back();
        }
        else {
            chuan.push_back(ch);
        }
    }
    if (chuan.empty()) {
        cout << "Good" << endl;
    } 
    else {
        cout << "Bad" << endl;
    }
    return 0;
}