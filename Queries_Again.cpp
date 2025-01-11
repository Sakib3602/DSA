#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newTail->prev = tail;
    tail = newTail;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newHead = new Node(val);
    if (head == NULL)
    {
        head = newHead;
        return;
    }
    newHead->next = head;
    head->prev = newHead;
    newHead->prev = NULL;
    head = newHead;
}

void insert_at_any(Node *&head, int val, int idx)
{
    Node *newOne = new Node(val);
    Node *temp = head;
    for (int i = 0; i < idx; i++)
    {
        temp = temp->next;
    }

    newOne->next = temp->next;
    temp->next->prev = newOne;
    temp->next = newOne;
    newOne->prev = temp;
}

void print(Node *&head, Node *&tail)
{
    Node *temp = head;
    Node *temp1 = tail;

    while (temp != NULL && temp1 != NULL)
    {

        cout << "L ->" << " ";
        cout << temp->val << " ";
        temp = temp->next;
    }
    while (temp1 != NULL)
    {

        cout << "R ->" << " ";
        cout << temp1->val << " ";
        temp1 = temp1->prev;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *temp = head;

    int t;
    cin >> t;
    int cnt;
    
    for (int i = 0; i < t; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print(head, tail);
        }
        
        else if(x > 0)
        {
            insert_at_any(head, v, x);
            print(head, tail);
        }
        else if (x > cnt)
        {
            cout << "Invalid" << endl;
            print(head, tail);
        }
    }

    return 0;
}