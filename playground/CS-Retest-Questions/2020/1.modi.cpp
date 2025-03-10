#include <bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int>> PII;
const int N = 110;
int g[N][N];
queue<PII> que;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> g[i][j];
            if (g[i][j] == 2) {
                que.push(make_pair(0, make_pair(i, j)));
            }
        }
    }
    int step = 0;
    while (!que.empty()) {
        PII t = que.front();
        que.pop();
        int flag = 0;
        step = t.first;
        for (int i = 0; i < 4; i++) {
            int new_x = t.second.first + dx[i];
            int new_y = t.second.second + dy[i];
            
            if (g[new_x][new_y] != 1) continue;
            
            flag = 1;
            g[new_x][new_y] = 2;
            que.push(make_pair(t.first + 1, make_pair(new_x, new_y)));
        }
        if (!flag) break;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (g[i][j] == 1) {
                cout << "False" << endl;
                return 0;
            }
        }
    }
    cout << step << endl;
    return 0;
}