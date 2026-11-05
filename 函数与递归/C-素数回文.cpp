#include <bits/stdc++.h>
using namespace std;
bool SU(long long n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    long long l = sqrt(n) + 1;
    for (long long i = 3; i <= l; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    long long t;
    cin >> t;
    string s = to_string(t);
    string rev = s;
    reverse(rev.begin(), rev.end());
    string h_str = s + rev.substr(1);   
    long long h_num = stoll(h_str);
    if (SU(h_num)) {
        cout << "prime" << endl;
    } 
    else {
        cout << "noprime" << endl;
    }
    return 0;
}