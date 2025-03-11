#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int n;
    cin >> n;
    int count = n;
    for (int i = 0; i < n; i++) {
        int spaces = n - i - 1;
        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < count; j++) cout << "*";
        cout << endl;
        count += 2;
    }
    return 0;
}