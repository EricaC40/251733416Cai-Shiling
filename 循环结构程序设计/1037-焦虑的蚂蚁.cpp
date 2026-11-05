#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >>n>>m;
    int maxT = 0;
    for(int i = 0;i<= m;i++){
        int d,x;
        cin>>d>>x;
        if(d == 0){
            maxT = max(maxT,x);
        }
        else{
            maxT =max(maxT,n-x);
        }
    }
    cout << maxT<<endl;
    return 0;
}