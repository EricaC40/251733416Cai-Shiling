#include <bits/stdc++.h>
using namespace std;
int Count(int n) {
    int c = 0;
    while (n > 0) {
        if (n % 10 == 2) { 
            c++;
        }
        n /= 10; 
    }
    return c;
}
int main() {
    int L, R;
    cin >> L >> R;
    int total = 0;
    for (int i = L; i <= R; i++) {
        total += Count(i);
    }
    cout << total << endl;
    return 0;
}