#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin >> n;
    m = n % 100;
   if(m >= 3 && m<=5) {
       cout<<"spring"<<endl;
   }
    else if(m >= 6 && m<=8){
        cout<<"summer"<<endl;
    }
    else if(m >= 9 && m<=11){
        cout<<"autumn"<<endl;
    }
    else{
        cout<<"winter"<<endl;
    }
    return 0;
}