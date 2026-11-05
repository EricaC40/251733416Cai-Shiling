#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;    
        if (b > a && b<15) {
            cout << b + 1 << endl;
        } if(b > a && b>15|| b < a){
            cout << b - 1 << endl;
        }
    }
    return 0;
}