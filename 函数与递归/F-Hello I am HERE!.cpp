#include <bits/stdc++.h>
using namespace std;
string add(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (a.length() < b.length()) {
        swap(a, b);
    }
    int carry = 0;
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        int A = a[i] - '0';
        int B = (i < b.length()) ? (b[i] - '0') : 0;
        int sum = A + B + carry;
        carry = sum / 10;
        result.push_back((sum % 10) + '0');
    }
    if (carry > 0) {
        result.push_back(carry + '0');
    }
    reverse(result.begin(), result.end());
    int start = 0;
    while (start < result.length() - 1 && result[start] == '0') {
        start++;
    }
    return result.substr(start);
}
int main() {
    int N;
    cin >> N;
    while (N--) {
        string a, b;
        cin >> a >> b;
        cout << add(a, b) << endl;
    }
    return 0;
}