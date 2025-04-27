#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

const int N = 300010;

// ��¼ÿ����ʹ�õ�ʳ������
int cnt[N];
// ��¼ÿһ��ʳ�Ļ�Ӱ�쵽��Щ����
vector<int> affect[N];
// ��¼ÿ�����Ƿ����ʳ��
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
        // �����ܸ�ʳ��Ӱ��Ĳ���
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