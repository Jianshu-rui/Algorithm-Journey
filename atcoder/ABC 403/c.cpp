#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    // 存储每个用户拥有权限的页面
    vector<unordered_set<int>> pagePermissions(N);
    // 标记每个用户是否拥有全量权限
    vector<bool> allPermissions(N, false);

    for (int i = 0; i < Q; ++i) {
        int queryType;
        cin >> queryType;
        if (queryType == 1) {
            int X, Y;
            cin >> X >> Y;
            // 授予用户 X 查看竞赛页面 Y 的权限
            pagePermissions[X - 1].insert(Y);
        } else if (queryType == 2) {
            int X;
            cin >> X;
            // 授予用户 X 查看所有比赛页面的权限
            allPermissions[X - 1] = true;
        } else if (queryType == 3) {
            int X, Y;
            cin >> X >> Y;
            if (allPermissions[X - 1] || pagePermissions[X - 1].count(Y)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}    