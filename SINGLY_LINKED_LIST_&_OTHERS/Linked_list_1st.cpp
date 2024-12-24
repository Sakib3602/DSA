#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node *a = new Node(300);
    Node *b = new Node(200);
    Node *c = new Node(100);

    a->next = b;
    b->next = c;

   Node* head = a;  

    while (head != NULL)
    {
        cout << head->val <<endl;
        head = head->next;
    }
    head = a;
    while (head != NULL)
    {
        cout << head->val <<endl;
        head = head->next;
    }

    return 0;
}