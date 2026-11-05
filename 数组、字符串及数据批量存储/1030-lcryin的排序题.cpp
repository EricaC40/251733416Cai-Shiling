#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x;
    int y;
    long long d;
};
int main() {
    int n;
    cin >> n;
    vector<Point> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y;
        p[i].d = (long long)p[i].x * p[i].x + (long long)p[i].y * p[i].y;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (p[j].d > p[j + 1].d) {
                Point temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
            else if (p[j].d == p[j + 1].d && p[j].x > p[j + 1].x) {
                Point temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
            else if (p[j].d== p[j + 1].d && p[j].x == p[j + 1].x && p[j].y > p[j + 1].y) {
                Point temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << p[i].x << " " << p[i].y << " " << p[i].d << endl;
    }
    return 0;
}