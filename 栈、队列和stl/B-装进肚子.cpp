#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, K;
    cin >> n >> K;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    vector<pair<int, int>> diffs(n);
    for (int i = 0; i < n; i++) {
        diffs[i] = {A[i] - B[i], i};
    }
    sort(diffs.begin(), diffs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first > b.first;
    });
    
    long long total = 0;
    for (int i = 0; i < K; i++) {
        int idx = diffs[i].second;
        total += A[idx];
    }
    for (int i = K; i < n; i++) {
        int idx = diffs[i].second;
        total += B[idx];
    }
    cout << total << endl;
    return 0;
}