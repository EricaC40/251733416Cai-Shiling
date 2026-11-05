#include <bits/stdc++.h>
using namespace std;
struct St{
    int id,c,m,e,total;
};
int main() {
    int n;
    cin >> n;
    St s[305];
    for (int i = 0; i < n; i++) {
        cin >> s[i].c >> s[i].m>> s[i].e;
        s[i].total = s[i].c + s[i].m + s[i].e;
        s[i].id = i + 1;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            bool swap = false;
            if (s[j].total < s[j + 1].total) {
                swap = true;
            }
            else if (s[j].total == s[j + 1].total && s[j].c < s[j + 1].c) {
                swap = true;
            }
            else if (s[j].total == s[j + 1].total && s[j].c ==s[j + 1].c && s[j].id > s[j + 1].id) {
                swap = true;
            }
            if (swap) {
                St temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5 && i < n; i++) {
        cout << s[i].id << " " << s[i].total << endl;
    } 
    return 0;
}