#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> P(n);
    for (int i = 0; i < n; ++i) {
        cin >> P[i];
    }
    vector<int> suffix_max(n + 1, 0);
    for (int i = n - 1; i >= 0; --i) {
        suffix_max[i] = max(P[i], suffix_max[i + 1]);
    }
    stack<int> st;
    vector<int> output;
    int i = 0;
    while (i < n || !st.empty()) {
        if (!st.empty() && st.top() >= suffix_max[i]) {
            output.push_back(st.top());
            st.pop();
        } else {
            st.push(P[i]);
            i++;
        }
    }
    for (int j = 0; j < n; ++j) {
        cout << output[j] << (j == n-1 ? "" : " ");
    }
    cout << endl;
    return 0;
}