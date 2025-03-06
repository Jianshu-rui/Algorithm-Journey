#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 方法1：左闭右开区间写法
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size();
        while (l < r) {
            int mid = (l + r) / 2;
            if (nums[mid] == target) return target;
            else if (nums[mid] < target) l = mid + 1;
            else r = mid;
        }
        return -1;
    }
    // 方法2：左闭右闭区间写法
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return -1;
    }
};

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    return 0;
}