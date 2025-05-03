#include <bits/stdc++.h>
using namespace std;

vector<string> rotate90(vector<string> &s) {
    vector<string> res;
    int n = s.size();
    for (int j = 0; j < n; j++) {
        string t = "";
        for (int i = n - 1; i >= 0; i--) {
            t += s[i][j];
        }
        res.push_back(t);
    }
    return res;
}

int compare(vector<string> &s, vector<string> &t) {
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] != t[i][j]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    vector<string> s, t;
    int n;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        cin >> a;
        t.push_back(a);
    }
    int mmin_ans = INT_MAX;
    
    for (int i = 0; i < 4; i++) {
        int diff = compare(s, t);
        mmin_ans = min(mmin_ans, diff + i);
        s = rotate90(s);
    }
    cout << mmin_ans << endl;
    return 0;
}