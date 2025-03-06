#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
int matrix[MAXN][MAXN];
int prefixSum[MAXN][MAXN];

void computePrefixSum(int m, int n) {
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            prefixSum[i][j] = matrix[i][j] 
                            + prefixSum[i-1][j] 
                            + prefixSum[i][j-1] 
                            - prefixSum[i-1][j-1];
        }
    }
}

int sumRegion(int row1, int col1, int row2, int col2) {
    return prefixSum[row2][col2] 
         - prefixSum[row1-1][col2] 
         - prefixSum[row2][col1-1] 
         + prefixSum[row1-1][col1-1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> matrix[i][j];
        }
    }

    computePrefixSum(m, n);

    int q;
    cin >> q;
    while (q--) {
        int row1, col1, row2, col2;
        cin >> row1 >> col1 >> row2 >> col2;
        cout << sumRegion(row1, col1, row2, col2) << endl;
    }

    return 0;
}