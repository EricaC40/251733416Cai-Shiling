#include <bits/stdc++.h>
using namespace std;
int main() {
    int apple[10];
    for (int i = 0; i < 10; i++) {
        cin >> apple[i];
    }
    int h;
    cin >> h;
    int reach = h + 30;
    int n = 0;
    for (int i = 0; i < 10; i++) {
        if (apple[i] <= reach) {
            n++;
        }
    }
    cout <<n<< endl;
    return 0;
}