#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

const int N = 300010;

// 记录每道菜使用的食材数量
int cnt[N];
// 记录每一种食材会影响到哪些菜肴
vector<int> affect[N];
// 记录每道菜是否可以食用
bool can_eat[N];

int n, m;

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        while (t--) {
            int x;
            cin >> x;
            cnt[i]++;
            affect[x].push_back(i);
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        // 遍历受该食材影响的菜肴
        for (int dish : affect[x]) {
            cnt[dish]--;
            if (cnt[dish] == 0 && !can_eat[dish]) {
                res++;
                can_eat[dish] = true;
            }
        }
        cout << res << endl;
    }

    return 0;
}    