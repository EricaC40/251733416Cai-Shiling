#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;  
    while (T--) {
        string s;
        cin >> s;
        string st;  
        for (char c : s) {
            st.push_back(c);
            while (st.size() >= 2) {
                int n = st.size();
                char l = st[n-1];
                char second_l = st[n-2];
                if (l == 'o' && second_l == 'o') {
                    st.pop_back(); 
                    st.pop_back(); 
                    st.push_back('O');
                } else if (l == 'O' && second_l == 'O') {
                    st.pop_back(); 
                    st.pop_back(); 
                } else {
                    break; 
                }
            }
        }
        cout << st << '\n';
    }
    return 0;
}