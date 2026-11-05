#include <bits/stdc++.h>
using namespace std;
string multiply(string num1, string num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    vector<int> r(len1 + len2, 0);
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + r[i + j + 1];
            r[i + j + 1] = sum % 10;
            r[i + j] += sum / 10;
        }
    }
    string p = "";
    int start = 0;
    while (start < r.size() && r[start] == 0) {
        start++;
    }
    for (int i = start; i < r.size(); i++) {
        p += to_string(r[i]);
    }
    if(p.empty()){
        return "0";
    }
    else{
        return p;
    }
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s1, s2;
        cin >> s1 >> s2;
        string n = multiply(s1, s2);
        cout << n << endl;
    }
    return 0;
}