#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    char c;
    int n;
    cin >> c >> n;
    c = (c + n - 1 - 'a') % 26 + 'a';
    // cout << c << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        putchar(c);
        int insapce = (n - i - 1) * 2 - 1;
        for (int j = 0; j < insapce; j++) {
            cout << " ";
        }
        if (i < n - 1) putchar(c);
        cout << endl;
        c = (c - 1 - 'a' + 26) % 26 + 'a';
    }
    c = (c + 2 - 'a' + 26) % 26 + 'a';
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        putchar(c);
        int insapce = (n - i - 1) * 2 - 1;
        for (int j = 0; j < insapce; j++) {
            cout << " ";
        }
        putchar(c); 
        cout << endl;
        c = (c + 1 - 'a' + 26) % 26 + 'a';
    }
    return 0;
}