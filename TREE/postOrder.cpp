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

void postOrder(Node* root)
{
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";

}
int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);


    root->left = a;
    a->left = b;
    b->left = c;
    b->right = d;

    root->right = e;
    e->left =f;
    f->right = g;


    postOrder(root);









    return 0;
}