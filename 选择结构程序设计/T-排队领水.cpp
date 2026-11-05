#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b;
    cin>>n>>a>>b;
    int c = a+1;
    if(n-b>c){
        c=n-b;
    }
    int d =n-c+1;
    if(d<0){
        d=0;
    }
    cout<<d<<endl;
    return 0;
}