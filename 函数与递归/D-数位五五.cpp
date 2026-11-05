#include <bits/stdc++.h>
using namespace std;
int Sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int x, y;
    cin >> x >> y;
    
    int c = 0;
    for (int i = x; i <= y; i++) {
        if (Sum(i) % 5 == 0) {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}