#include <bits/stdc++.h>
using namespace std;
int main() {
    int y, m, d;
    scanf("%d/%d/%d", &y, &m, &d);
    
    if (y==2020 && m < 10 || (m == 10 && d < 29)) {
        cout << "No. It's not too late." << endl;
    } 
    else {
        cout << "QAQ" << endl;
    }
 
    return 0;
}