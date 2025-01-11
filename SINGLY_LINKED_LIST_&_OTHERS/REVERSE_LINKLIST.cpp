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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newTail = new Node(val);
    if (head == NULL)
    {
        head = newTail;
        tail = newTail;
        return;
    }
    tail->next = newTail;
    tail = newTail;
}
void print_reversed(Node *&head, Node *&tail, Node *temp)
{

    if (temp == NULL)
    {
        head = temp;   // 
        return;
    }

    print_reversed(head, tail, temp->next);
    temp->next->next = temp;
    temp = NULL;
    tail = temp;
    // cout << temp->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    print_reversed(head, tail, head);
    cout << endl;
    cout << head->val;

    return 0;
}