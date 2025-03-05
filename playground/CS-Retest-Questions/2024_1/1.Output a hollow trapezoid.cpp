#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    int n;
    cin >> n;
    if (n < 1 || n > 20) {
        cout << "input error" << endl;
        return 0;
    }

    int up = n, bottom = 3 * n - 2;
    string upStr = "", bottomStr = "";
    for (int i = 0; i < up; i++) upStr += "*";
    for (int i = 0; i < bottom; i++) bottomStr += "*";
    for (int i = 0; i < n; i++) {
        int spaces = n - i - 1;
        for (int j = 0; j < spaces; j++) cout << " ";

        if (i == 0) cout << upStr << endl;
        else if (i == n - 1) cout << bottomStr << endl;
        else {
            cout << "*";
            int inspaces = up + (i - 1) * 2;
            for (int j = 0; j < inspaces; j++) cout << " ";
            cout << "*" << endl;
        }
    }
    
    return 0;
}