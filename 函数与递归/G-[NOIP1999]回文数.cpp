#include <bits/stdc++.h>
using namespace std;
int ci(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    return c - 'A' + 10;
}
char ic(int x) {
    if (x >= 0 && x <= 9) return '0' + x;
    return 'A' + (x - 10);
}
bool hui(const string &s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
string add(const string &a, const string &b, int base) {
    vector<int> x;
    int n = 0;
    int i = a.length() - 1, j = b.length() - 1;
    while (i >= 0 || j >= 0 || n > 0) {
        int sum = n;
        if (i >= 0) sum += ci(a[i--]);
        if (j >= 0) sum += ci(b[j--]);
        x.push_back(sum % base);
        n = sum / base;
    }
    string r;
    for (int k = x.size() - 1; k >= 0; k--) {
        r += ic(x[k]);
    }
    return r;
}
int main() {
    int N;
    string M;
    cin >> N >> M;
    int s = 0;
    while (s <= 30) {
        if (hui(M)) {
            cout << "STEP=" << s<< endl;
            return 0;
        }
        string m = M;
        reverse(m.begin(), m.end());
        M = add(M, m, N);
        s++;
    }
    cout << "Impossible!" << endl;
    return 0;
}