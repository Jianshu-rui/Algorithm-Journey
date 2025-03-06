#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Ë¼Ïë£ºË«Ö¸Õë
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int i = 0, j = nums.size() - 1, k = nums.size() - 1;
        while (i <= j) {
            if (nums[i] * nums[i] > nums[j] * nums[j]) {
                res[k--] = nums[i] * nums[i];
                i++;
            } else {
                res[k--] = nums[j] * nums[j];
                j--;
            }
        }
        return res;
    }
};

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    return 0;
}