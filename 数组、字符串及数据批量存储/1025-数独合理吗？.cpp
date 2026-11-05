#include <bits/stdc++.h>
using namespace std;
int board[9][9];
bool A() {
    for (int i = 0; i < 9; i++) {
        bool used[10] = {false};
        for (int j = 0; j < 9; j++) {
            int num = board[i][j];
            if (num < 1 || num > 9) return false; 
            if (used[num]) return false;
            used[num] = true;
        }
    }
    return true;
}
bool B() {
    for (int j = 0; j < 9; j++) {
        bool used[10] = {false};
        for (int i = 0; i < 9; i++) {
            int num = board[i][j];
            if (used[num]) return false;
            used[num] = true;
        }
    }
    return true;
}
bool C() {
    for (int box = 0; box < 9; box++) {
        bool used[10] = {false};
        int a = (box / 3) * 3;
        int c = (box % 3) * 3;
        for (int i = a; i <a + 3; i++) {
            for (int j = c; j < c + 3; j++) {
                int num = board[i][j];
                if (used[num]) return false;
                used[num] = true;
            }
        }
    }
    return true;
}
int main() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> board[i][j];
        }
    }
    if (A() && B() && C()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}