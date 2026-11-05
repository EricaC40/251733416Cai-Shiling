#include <bits/stdc++.h>
using namespace std;
int main() {
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    d-=2;
    if (d <= 0) {
        m--;
        if (m == 0) {
            m = 12;
            y--;
        }
        if (m == 2) {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
                d += 29;
            } else {
                d += 28;
            }
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            d += 30;
        } else {
            d += 31;
        }
    }
    
    printf("%04d-%02d-%02d", y, m, d);
    return 0;
}