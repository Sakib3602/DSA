#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *left;
    Node *right;

    Node(int val) {
        value = val;
        left = NULL;
        right = NULL;
    }
};

// Function to take input for the binary tree in level order
Node* input() {
    int rootValue;
    cin >> rootValue;

    if (rootValue == -1) return NULL;

    Node* root = new Node(rootValue);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        int leftValue, rightValue;
        cin >> leftValue >> rightValue;

        if (leftValue != -1) {
            current->left = new Node(leftValue);
            q.push(current->left);
        }
        if (rightValue != -1) {
            current->right = new Node(rightValue);
            q.push(current->right);
        }
    }

    return root;
}


void findLeaves(Node* root, vector<int>& v) {
    if (!root) return;

    if (!root->left && !root->right) {
        v.push_back(root->value);
        return;
    }

    findLeaves(root->left, v);
    findLeaves(root->right, v);
}

int main() {
    Node* root = input();

    vector<int> v;
    findLeaves(root, v);

    sort(v.begin(), v.end(), greater<int>());

  
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}


   