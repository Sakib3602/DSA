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
    queue<Node *> q;
    Node *root;

    if (n == -1)
    {
        root = NULL; 
    }
    else
    {
        root = new Node(n);
    }
    
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        Node *myLeft, *myRight;

        int l, r;
        cin >> l >> r;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }

    return root;
}

int leaf(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = leaf(root->left);
    int r = leaf(root->right);
    return l+r;
}



int main()
{
    Node *root = input();
    cout << leaf(root) << endl;
  

    return 0;
}
