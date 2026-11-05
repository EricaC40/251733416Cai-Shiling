#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    for (int i = 0; i < n - 2; i++) {
        if (sorted_a[i] + sorted_a[i+1] > sorted_a[i+2]) {
            cout << sorted_a[i] << " " << sorted_a[i+1] << " " << sorted_a[i+2] << endl;
            return 0;
        }
    }
    cout << "No solution" << endl;
    return 0;
}