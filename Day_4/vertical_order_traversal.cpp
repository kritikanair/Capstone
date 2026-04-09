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

vector<vector<int>> verticalOrder(Node* root) {
    map<int, vector<int>> mp;
    queue<pair<Node*, int>> q;

    if(root) q.push({root, 0});

    while(!q.empty()) {
        auto it = q.front();
        q.pop();

        Node* node = it.first;
        int hd = it.second;

        mp[hd].push_back(node->val);

        if(node->left) q.push({node->left, hd - 1});
        if(node->right) q.push({node->right, hd + 1});
    }

    vector<vector<int>> ans;
    for(auto &it : mp) {
        ans.push_back(it.second);
    }

    return ans;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> res = verticalOrder(root);

    for(auto &col : res) {
        for(int x : col) cout << x << " ";
        cout << endl;
    }

    return 0;
}