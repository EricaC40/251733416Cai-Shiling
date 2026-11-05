#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

unordered_map<int, unordered_map<int, int>> mid = {
    {1, {{3,2}, {7,4}, {9,5}}},
    {2, {{8,5}}},
    {3, {{1,2}, {7,5}, {9,6}}},
    {4, {{6,5}}},
    {6, {{4,5}}},
    {7, {{1,4}, {3,5}, {9,8}}},
    {8, {{2,5}}},
    {9, {{1,5}, {3,6}, {7,8}}}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    while (cin >> s) {
        unordered_set<int> vis;
        bool ok = true;
        for (char ch : s) {
            int d = ch - '0';
            if (vis.count(d)) {
                ok = false;
                break;
            }
            vis.insert(d);
        }
        if (!ok) {
            cout << "NO\n";
            continue;
        }
        vis.clear();
        int prev = s[0] - '0';
        vis.insert(prev);
        for (int i = 1; i < s.size(); ++i) {
            int cur = s[i] - '0';
            if (mid[prev].count(cur)) {
                int m = mid[prev][cur];
                if (!vis.count(m)) {
                    ok = false;
                    break;
                }
            }
            vis.insert(cur);
            prev = cur;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
