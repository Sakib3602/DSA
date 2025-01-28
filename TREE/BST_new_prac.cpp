#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input()
{
    int n;
    cin >> n;
    if (n == -1)
        return NULL;
    Node *root = new Node(n);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft = (l == -1) ? NULL : new Node(l);
        Node *myRight = (r == -1) ? NULL : new Node(r);
        f->left = myLeft;
        f->right = myRight;

        if (myLeft != NULL)
            q.push(myLeft);
        if (myRight != NULL)
            q.push(myRight);
    }
    return root;
}
bool BST(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (root->val > x) // left a jabe
    {
        return BST(root->left, x);
    }
    else // right a jabe
    {
        return BST(root->right, x);
    }
}

int main()
{
    Node *root = input();
    int x;
    cin >> x;
    bool a = BST(root, x);
    if (a)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}