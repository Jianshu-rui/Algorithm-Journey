#include <bits/stdc++.h>
using namespace std;

const int N = 200010;

int p[N];

int n, m;
int branch_cnt;

bool sset[N];

void init() {
    for (int i = 1; i <= n; i++) p[i] = -1;
}

// 查找函数，带路径压缩
int find(int x) {
    if (p[x] < 0) return x; // 如果是根节点，直接返回
    return p[x] = find(p[x]); // 路径压缩
}

// 合并两个集合
void merge(int x, int y) {
    int fx = find(x), fy = find(y);
    if (fx == fy) return; // 已经在同一集合，无需合并

    // 按集合大小合并（负值越小，集合越大）
    if (p[fx] < p[fy]) {
        p[fx] += p[fy]; // 更新 fx 集合的大小
        p[fy] = fx;     // 将 fy 的根指向 fx
    } else {
        p[fy] += p[fx]; // 更新 fy 集合的大小
        p[fx] = fy;     // 将 fx 的根指向 fy
    }
}

// int find(int x) {
//     if (p[x] > 0) {
//         p[x] = find(p[x]);
//         return p[x];
//     }
//     return x;
// }

// void merge(int x, int y) {
//     int fx = find(x), fy = find(y);
//     if (fx == fy) return ;
//     p[fx] += p[fy];
//     p[fy] = fx;
// }

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n >> m;
    init();
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        merge(a, b);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int root = find(i);
        // cout << p[root] << endl;
        if (sset[root] == 0) {
            cnt += (-p[root] - 1);
            sset[root] = 1;
        }
    }

    cout << m - cnt << endl;

    return 0;
}