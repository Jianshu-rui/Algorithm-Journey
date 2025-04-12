#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
vector<PII> v;
unordered_map<int, PII> mp;

bool cmp(PII a, PII b) {
    return a.first > b.first;
}

int n;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n;
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        mp[x].first = i;
        mp[x].second++;
    }
    
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second.second == 1) {
            v.push_back(make_pair(it->first, it->second.first));
        }
    }

    if (v.size() == 0) {
        cout << -1 << endl;
    } else {
        sort(v.begin(), v.end(), cmp);
        cout << v[0].second << endl;
    }
    return 0;
}