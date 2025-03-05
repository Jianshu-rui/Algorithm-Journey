#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    int n;
    cin >> n;
    vector<string> res;
    for (int i = 1; i <= n / 3; i++) {
        for (int j = i + 1; j <= (n - i) / 2; j++) {
            int t = n - i - j;
            if (t > j) {
                res.push_back(to_string(n) + "=" + to_string(i) + "+" + to_string(j) + "+" + to_string(t));
            }
        }
    }
    for (int i = 0; i < res.size(); i++) {
        if (i != 0) cout << " ";
        cout << res[i];
    }
    cout << endl;
    return 0;
}