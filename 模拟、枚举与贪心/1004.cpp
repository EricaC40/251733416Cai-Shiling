#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Dic {
    string pat;
    char val;
};
vector<Dic> dict = {
    {"zero", '0'},
    {"four", '4'},
    {"nine", '9'},
    {"two", '2'},
    {"six", '6'}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        string s, ans;
        cin >> s;
        int i = 0;
        int n = s.size();
        while (i < n) {
            if (isdigit(s[i])) {
                if (s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '9') {
                    ans += s[i];
                }
                i++;
            } else {
                bool found = false;
                for (auto &p : dict) {
                    int len = p.pat.size();
                    if (i + len <= n && s.substr(i, len) == p.pat) {
                        ans += p.val;
                        i += len;
                        found = true;
                        break;
                    }
                }
                if (!found) i++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
