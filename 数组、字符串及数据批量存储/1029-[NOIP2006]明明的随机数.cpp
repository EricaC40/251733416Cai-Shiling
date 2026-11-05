#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int m = 0; 
    for (int i = 0; i < n; i++) {
        if (i == 0 || a[i] != a[i - 1]) {
            a[m] = a[i];
            m++;
        }
    }
    cout << m << endl;
    for (int i = 0; i < m; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << a[i];
    }
    cout << endl;
    return 0;
}