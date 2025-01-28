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
void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left)
            q.push(f->left); 
        if(f->right)
            q.push(f->right);

    }
    
}

void insert(Node* &root,int x)
{
    if(root == NULL)
        root = new Node(x);

    if(root->val > x)
    {
        if(root->left == NULL)
            root->left = new Node(x);
        else insert(root->left,x);
        
    }
    else{
        if(root->right == NULL)
            root->right = new Node(x);
        else insert(root->right,x);
    }

}

int main()
{
    Node *root = input();
    int x;
    cin >> x;
    insert(root,x);
    level_order(root);

   

    return 0;
}