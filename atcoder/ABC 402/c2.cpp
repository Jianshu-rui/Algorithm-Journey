#include <bits/stdc++.h>
using namespace std;

const int N = 300010;

vector<unordered_map<int, int>> mp;

int cnt[N];

int n, m;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        unordered_map<int, int> mm;
        while (t--) {
            int x;
            cin >> x;
            mm[x]++;
            cnt[i]++;
        }
        mp.push_back(mm);
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < m; j++) {
            if (mp[j][x] > 0) {
                mp[j][x] = 0;
                cnt[j]--;
                if (cnt[j] == 0) {
                    res++;
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}