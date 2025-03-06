#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ˼·��ģ��
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int i = 0, j = 0;
        // ������������
        int dir = 0;
        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        for (int num = 1; num <= n * n; num++) {
            ans[i][j] = num;
            // �ж��Ƿ�ı䷽��
            if (j + dy[dir] >= n || j + dy[dir] < 0 || i + dx[dir] >= n || i + dx[dir] < 0 || ans[i + dx[dir]][j + dy[dir]] != 0) {
                dir = (dir + 1) % 4;
            }
            // ������һ��λ��
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