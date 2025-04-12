#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
PII movie[200010];

unordered_map<int, int> mp;

int n, m;
typedef struct movies {
    
} movies;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        mp[x]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++) cin >> movie[i].first;
    for (int i = 0; i < m; i++) cin >> movie[i].second;
    int ans = 0, cnt = 0;
    int res = 0;
    for (int i = 0; i < m; i++) {
        int t = 0;
        if (movie[i].first == movie[i].second) {
            t = mp[movie[i].first];
        } else {
            t = mp[movie[i].first] + mp[movie[i].second];
        }
        if (ans == t) {
            cnt++;
        } else if (ans < t) {
            res = i + 1;
            ans = t;
            cnt = 1;
        }
    }
    
    cout << res << endl;
    return 0;
}