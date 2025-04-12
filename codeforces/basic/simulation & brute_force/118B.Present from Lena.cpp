#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        int spaces = 2 * n - 2 * i;
        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j <= i; j++) {
            if (j) cout << " ";
            cout << j;
        }
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--) {
        int sapces = 2 * n - 2 * i;
        for (int j = 0; j < sapces; j++) cout << " ";
        for (int j = 0; j <= i; j++) {
            if (j) cout << " ";
            cout << j;
        }
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }
        cout << endl;
    }
    
    return 0;
}