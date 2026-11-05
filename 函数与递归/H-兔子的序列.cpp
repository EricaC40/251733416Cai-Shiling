#include <bits/stdc++.h>
using namespace std;
bool ps(int x) {
    if (x < 0) return false;
    int r = sqrt(x);
    return r * r == x;
}
int main() {
    int n;
    cin >> n;
    int maxs = -1;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a!=ps(a)) {
            if (a > maxs) {
                maxs = a;
            }
        }
    }
    cout << maxs << endl;
    return 0;
}