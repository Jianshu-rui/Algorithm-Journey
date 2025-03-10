#include <bits/stdc++.h>
using namespace std;

string a, b, s;
int ans_a = -1, ans_b = -1;
void dfs(int a_cnt, int b_cnt, string res) {
    if (res == s) {
        ans_a = a_cnt;
        ans_b = b_cnt;
        return ;
    }
    if (res.size() > s.size()) return ;
    dfs(a_cnt + 1, b_cnt, res + a);
    dfs(a_cnt, b_cnt + 1, res + b);
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> a >> b >> s;
    string ss = "";
    dfs(0, 0, ss);
    if (ans_a == -1 && ans_b == -1) {
        cout << "False" << endl;
    } else {
        cout << ans_a << " " << ans_b << endl;
    }
    return 0;
}