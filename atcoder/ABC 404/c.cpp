#include <bits/stdc++.h>
using namespace std;

const int N = 200010;

int degree[N], n, m;
vector<int> g[N];
bool visited[N];

void dfs(int v) {
    visited[v] = true;
    for (int u : g[v]) {
        if (!visited[u]) {
            dfs(u);
        }
    }
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        degree[a]++;
        degree[b]++;
    }

    if (n != m) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (degree[i] != 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    dfs(1);
    
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}