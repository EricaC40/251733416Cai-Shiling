#include <bits/stdc++.h>
using namespace std;
int main() {
    string l;
    int n =0;
    while(getline(cin,l)){
        if(l=="."){
            break;
         }
        for(char c: l){
            if(c=='a'){
                n++;
            }
         }
    }
    cout << n<<endl;
    return 0;
}