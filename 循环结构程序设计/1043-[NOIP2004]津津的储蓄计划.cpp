#include <bits/stdc++.h>
using namespace std;
int main() {
    int bag[12];
    for (int i = 0; i < 12; i++) {
        cin >> bag[i];
    }
    int hand = 0;      
    int save = 0;     
    
    for (int i = 0; i < 12; i++) {
        hand += 300;
        if (hand < bag[i]) {
            cout << "-" << i + 1 << endl;
            return 0;
        }
        hand -= bag[i];
        if (hand >= 100) {
            int hundred = (hand / 100) * 100;
            save += hundred;
            hand -= hundred;
        }
    }
    cout << hand + save * 1.2 << endl;
    return 0;
}