#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = right = NULL;
    }
};

Node* LCA(Node* root, Node* p, Node* q) {
    if(root == NULL || root == p || root == q) return root;

    Node* left = LCA(root->left, p, q);
    Node* right = LCA(root->right, p, q);

    if(left && right) return root;
    return left ? left : right;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Node* p = root->left->left;
    Node* q = root->left->right;

    Node* ans = LCA(root, p, q);

    if(ans) cout << ans->val << endl;

    return 0;
}