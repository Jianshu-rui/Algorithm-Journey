#include <bits/stdc++.h>
using namespace std;

class MyLinkedList {
public:
    MyLinkedList() {
        _dymmyHead = new LinkedNode(0);
        _size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= _size) return -1;
        LinkedNode *cur = _dymmyHead->next;
        while (index--) {
            cur = cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        LinkedNode *newNode = new LinkedNode(val);
        newNode->next = _dymmyHead->next;
        _dymmyHead->next = newNode;
        _size++;
    }
    
    void addAtTail(int val) {
        LinkedNode *newNode = new LinkedNode(val);
        LinkedNode *cur = _dymmyHead;
        while (cur->next) {
            cur = cur->next;
        }
        cur->next = newNode;
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > _size) return;
        if (index < 0) index = 0;
        LinkedNode *newNode = new LinkedNode(val);
        LinkedNode *cur = _dymmyHead;
        while (index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        _size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= _size) return;
        LinkedNode *cur = _dymmyHead;
        while (index--) {
            cur = cur->next;
        }
        LinkedNode *tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        _size--;
    }
private:
    struct LinkedNode {
        int val;
        LinkedNode *next;
        LinkedNode(int val): val(val), next(nullptr) {}
    };
    LinkedNode *_dymmyHead;
    int _size;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */


int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    return 0;
}