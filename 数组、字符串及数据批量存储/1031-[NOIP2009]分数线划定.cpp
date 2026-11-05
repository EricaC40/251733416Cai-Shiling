#include <bits/stdc++.h>
using namespace std;
struct Player {
    int id,s;
};
int main() {
    int n, m;
    cin >> n >> m;
    Player p[5005];
    for (int i = 0; i < n; i++) {
        cin >> p[i].id >> p[i].s;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (p[j].s < p[j + 1].s) {
                Player temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
            else if (p[j].s == p[j + 1].s && p[j].id > p[j + 1].id) {
                Player temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    int c = m * 1.5;
    int d = p[c - 1].s;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].s >= d) {
            sum++;
        } else {
            break;
        }
    }
    cout << d << " " << sum << endl;
    for (int i = 0; i < sum; i++) {
        cout << p[i].id << " " << p[i].s << endl;
    }
    return 0;
}