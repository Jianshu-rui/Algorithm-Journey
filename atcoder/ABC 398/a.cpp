#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    string s = "";
    int n;
    cin >> n;
    string s1 = "", s2 = "", s3 = "";
    if (n % 2 == 0) {
        int pre1_cnt = (n - 2) / 2;
        for (int i = 0; i < pre1_cnt; i++) {
            s1 += "-";
            s3 += "-";
        }
        s += s1 + "==" + s3;
    } else {
        int pre1_cnt = (n - 1) / 2;
        for (int i = 0; i < pre1_cnt; i++) {
            s1 += "-";
            s3 += "-";
        }
        s += s1 + "=" + s3;
    }
    cout << s << endl;
    return 0;
}