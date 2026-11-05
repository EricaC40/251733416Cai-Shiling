#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[10000]; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    int max1 = a[n - 1];
    int max2 = max1;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] != max1) {
            max2 = a[i];
            break;
        }
    }
    int min1 = a[0];
    int min2 = min1;
    for (int i = 1; i < n; i++) {
        if (a[i] != min1) {
            min2 = a[i];
            break;
        }
    }
    cout << max1 - max2 << " " << max1 - min2 << " "<< max2 - min2 << " "<< max2 - min1 << endl;
    return 0;
}