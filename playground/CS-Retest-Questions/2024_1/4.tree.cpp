#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    char val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

string tree;
void build(TreeNode *&root, int &idx) {
    if (idx >= tree.size() || tree[idx] == '#') {
        root = nullptr;
        idx++;
        return;
    }
    root = new TreeNode(tree[idx]);
    idx++;
    build(root->left, idx);
    build(root->right, idx);
}
void build1(TreeNode *root, int &idx) {
    if (idx >= tree.size()) return ;
    root = new TreeNode(tree[idx]);
    idx++;
    build1(root->left, idx);
    build1(root->right, idx);
}

// 前序遍历
void preOrder(TreeNode *root) {
    if (root == nullptr) return;
    
    if (root->val != '#') cout << root->val;
    preOrder(root->left);
    preOrder(root->right);
}

// 中序遍历
void inOrder(TreeNode *root) {
    if (root == nullptr) return;
    inOrder(root->left);
    if (root->val != '#') cout << root->val;
    inOrder(root->right);
}

// 后序遍历
void postOrder(TreeNode *root) {
    if (root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    if (root->val != '#') cout << root->val;
}
// ABD##EF##G##C##
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    cin >> tree;
    TreeNode *root = nullptr;
    int idx = 0;
    build(root, idx);
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    return 0;
}