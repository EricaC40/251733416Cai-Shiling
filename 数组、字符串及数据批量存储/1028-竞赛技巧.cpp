#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int h[5000], m[5000], s[5000];
    for (int i = 0; i < n; i++) {
        cin >> h[i] >> m[i] >> s[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (h[j] > h[j + 1]) {
                swap(h[j], h[j + 1]);
                swap(m[j], m[j + 1]);
                swap(s[j], s[j + 1]);
            }
            else if (h[j] == h[j + 1] && m[j] > m[j + 1]) {
                swap(h[j], h[j + 1]);
                swap(m[j], m[j + 1]);
                swap(s[j], s[j + 1]);
            }
            else if (h[j] == h[j + 1] && m[j] == m[j + 1] && s[j] > s[j + 1]) {
                swap(h[j], h[j + 1]);
                swap(m[j], m[j + 1]);
                swap(s[j], s[j + 1]);
            }
        }
    }
     for (int i = 0; i < n; i++) {
        cout << h[i] << " " << m[i] << " " << s[i] << endl;
    } 
    return 0;
}