#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    char c;
    int n;
    cin >> c >> n;
    int count = (2 * n - 1) * 2 - 2;
    // cout << count << endl;
    
    for (int i = 0; i < n; i++) {
        int spaces = n - i;
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        putchar((c - 'a') % 26 + 'a');
        
        if (i > 0) {
            int insapces = 2 * i - 1;
            for (int j = 0; j < insapces; j++) {
                cout << " ";
            }
            putchar(((c - 'a') + count) % 26 + 'a');
        }
        c++;
        count -= 2;
        cout << endl;
    }
    
    for (int i = n - 2; i >= 0; i--) {
        int spaces = n - i;
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        putchar((c - 'a') % 26 + 'a');
        if (i > 0) {
            int insapces = 2 * i - 1;
            for (int j = 0; j < insapces; j++) {
                cout << " ";
            }
            putchar(((c - 'a') + count) % 26 + 'a');
        }
        c++;
        count -= 2;
        cout << endl;
    }

    return 0;
}