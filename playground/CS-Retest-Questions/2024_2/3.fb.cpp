#include <bits/stdc++.h>
using namespace std;

vector<string> res;

void fbi(int n) {
    if (n == 1) {
        res.push_back("f(" + to_string(n) + ")" + "=1");
        return ;
    }
    if (n == 2) {
        res.push_back("f(" + to_string(n) + ")" + "=1");
        return ;
    }
    string f = "f(" + to_string(n) + ")";
    string fn_1 = "f(" + to_string(n - 1) + ")";
    string fn_2 = "f(" + to_string(n - 2) + ")";
    res.push_back(f + "=" + fn_1 + "+" + fn_2);
    fbi(n - 1);
    fbi(n - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here

    int n;
    cin >> n;
    fbi(n);
    for (int i = 0; i < res.size(); i++) {
        if (i != 0) cout << " ";
        cout << res[i];
    }
    cout << endl;
    return 0;
}