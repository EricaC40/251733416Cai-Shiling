#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,n,m;
    cin>>a>>b>>n;
    m=abs(a)+abs(b);
    if(n>=m && (n-m)%2==0){
        cout<<"YES"<<endl;
    }
    else{
       cout<<"NO"<<endl;
    }
    return 0;
}