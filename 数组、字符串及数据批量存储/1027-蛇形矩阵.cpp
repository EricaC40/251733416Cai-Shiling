#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n, 0));
    int num = 1;
    for (int l = 0; l < 2 * n - 1; l++) {
        if (l % 2 == 0) {
            for (int i = min(l, n - 1); i >= 0; i--) {
                int j = l - i;
                if (j < n) {
                    m[i][j] = num++;
                }
            }
        } else {
            for (int i = 0; i <= min(l, n - 1); i++) {
                int j = l - i;
                if (j < n) {
                    m[i][j] = num++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }  
    return 0;
}