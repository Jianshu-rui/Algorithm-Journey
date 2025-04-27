#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    // �洢ÿ���û�ӵ��Ȩ�޵�ҳ��
    vector<unordered_set<int>> pagePermissions(N);
    // ���ÿ���û��Ƿ�ӵ��ȫ��Ȩ��
    vector<bool> allPermissions(N, false);

    for (int i = 0; i < Q; ++i) {
        int queryType;
        cin >> queryType;
        if (queryType == 1) {
            int X, Y;
            cin >> X >> Y;
            // �����û� X �鿴����ҳ�� Y ��Ȩ��
            pagePermissions[X - 1].insert(Y);
        } else if (queryType == 2) {
            int X;
            cin >> X;
            // �����û� X �鿴���б���ҳ���Ȩ��
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