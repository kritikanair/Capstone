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

Node* invertTree(Node* root) {
    if(root == NULL) return NULL;

    Node* temp = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(temp);

    return root;
}

void inorder(Node* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    cout << "Original Tree (Inorder): ";
    inorder(root);
    cout << endl;

    // Invert tree
    root = invertTree(root);

    cout << "Inverted Tree (Inorder): ";
    inorder(root);
    cout << endl;

    return 0;
}