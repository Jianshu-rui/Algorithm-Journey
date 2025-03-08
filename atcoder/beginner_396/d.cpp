#include <bits/stdc++.h>
using namespace std;

long long g[11][11];
bool visited[11];
int n, m;
long long min_ans = LLONG_MAX;
vector<long long> path;
void dfs(int u) {
    if (u == n) {
        long long ans = path[0];
        for (int i = 1; i < path.size(); i++) {
            ans ^= path[i];
        }
        min_ans = min(min_ans, ans);
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (g[u][i] != -1 && !visited[i]) {
            visited[i] = true;
            path.push_back(g[u][i]);
            dfs(i);
            visited[i] = false;
            path.pop_back();
        }
    }
}


int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    cin >> n >> m;
    memset(g, -1, sizeof(g));
    for (int i = 0; i < m; i++) {
        long long u, v, w;
        cin >> u >> v >> w;
        g[u][v] = w;
        g[v][u] = w;
    }
    visited[1] = true;
    dfs(1);
    cout << min_ans << endl;

    return 0;
}