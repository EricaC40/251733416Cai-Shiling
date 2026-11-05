#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,t;cin >> n >> t;
    string s;cin >> s;
    int dian = -1;
    for (int i = 0; i < n; i++){
        if (s[i] == '.') {
            dian = i;
            break;
        }
    }
    if (dian == -1){
        cout << s << endl;
        return 0;
    }
    int pos = -1;
    for (int i = dian + 1; i < n; i++){
        if (s[i] >= '5'){
            pos = i;
            break;
        }
    }
    if (pos == -1){
        cout << s << endl;
        return 0;
    }
    while (pos > dian && t > 0){
        pos--; 
        t--;
        if (pos == dian){
            int i = dian - 1;
            while (i >= 0){
                if (s[i] == '9'){
                    s[i] = '0';
                    i--;
                }
                else{
                    s[i]++;
                    break;
                }
            }
            if (i < 0) cout << "1";
            cout << s.substr(0, dian) << endl;
            return 0;
        }
        s[pos]++;
        if (s[pos] < '5'){
            break;
        }
    }
    cout << s.substr(0, pos + 1) << endl;
    return 0;
}