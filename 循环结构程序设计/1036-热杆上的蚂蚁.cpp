#include <bits/stdc++.h>
using namespace std;
int main() {
    int l,n;
    cin >>l>>n;
    int m[n]; 
    for(int i = 0;i <n; i++){
        cin >>m[i];
    }
    int minT = 0;
    for (int i=0; i<n; i++){
        int near = min(m[i],l-m[i]);
        minT=max(minT,near);
    }
    cout << minT<<endl;
    return 0;
}