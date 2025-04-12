#include <bits/stdc++.h>
using namespace std;

bool check(int year) {
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) return true;
    return false;
}


int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int n;
    cin >> n;
    if (check(n)) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}