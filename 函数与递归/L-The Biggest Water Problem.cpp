#include <bits/stdc++.h>
using namespace std;
int Formula(int n) {
    if (n == 0) return 0;
    return (n % 9 == 0) ? 9 : n % 9;
}
int main() {
    int n;
    cin >> n;
    int result = Formula(n);
    cout << result << endl;
    
    return 0;
}