#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 思路：模拟
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int i = 0, j = 0;
        // 方向：右下左上
        int dir = 0;
        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        for (int num = 1; num <= n * n; num++) {
            ans[i][j] = num;
            // 判断是否改变方向
            if (j + dy[dir] >= n || j + dy[dir] < 0 || i + dx[dir] >= n || i + dx[dir] < 0 || ans[i + dx[dir]][j + dy[dir]] != 0) {
                dir = (dir + 1) % 4;
            }
            // 计算下一个位置
            i += dx[dir];
            j += dy[dir];
        }
        return ans;
    }
};

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    return 0;
}