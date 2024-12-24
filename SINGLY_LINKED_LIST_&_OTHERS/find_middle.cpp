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
    Node *newHoney = new Node(val);
    if (head == NULL)
    {
        head = newHoney;
        tail = newHoney;
        return;
    }

    tail->next = newHoney;
    tail = newHoney;
}
void print(Node *&head)
{

    Node *temp = head;
    Node *x = head;
    Node *x1 = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;

        temp = temp->next;
    }
    int op = int(count / 2);
    cout << op << endl;
    if (count % 2 != 0)    
    {
        for (int i = 0; i < op; i++)
        {
            x = x->next;
        }
        cout << x->val  << endl;
    }
    else
    {
        for (int i = 0; i < op; i++)
        {
            x = x->next;
        }
        for (int i = 0; i < op - 1; i++)
        {
            x1 = x1->next;
        }
        cout << x->val << " " << x1->val << endl;
    }
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    print(head);

    return 0;
}