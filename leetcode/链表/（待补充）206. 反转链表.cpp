#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// ·¨Ò»
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *dummyHead = new ListNode();
        ListNode *cur = head;
        while (cur != nullptr) {
            ListNode *t = cur->next;
            cur->next = dummyHead->next;
            dummyHead->next = cur;
            cur = t;
        }
        return dummyHead->next;
    }
};

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    return 0;
}