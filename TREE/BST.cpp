
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

void print(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
    cout << endl;
}

bool search(Node *root, int val)
{
    if(root == NULL)
        return false;
    if(root->val == val) return true;
    if(root->val < val)
    {
        bool l = search(root->left,val);
        return l;

    }
    if(root->val > val)
    {
        bool r = search(root->right,val);
        return r;
    }
    

}

int main()
{
    Node *root = input();
    int x;
    cin >> x;

    bool x1 = search(root, x);
    if (x1)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    print(root);

    return 0;
}
