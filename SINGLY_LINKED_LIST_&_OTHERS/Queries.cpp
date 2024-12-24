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

/*
     -----------head a insert---------------
*/
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newHead = new Node(val);
    newHead->next = head;
    head = newHead;
    if (tail == NULL)
        tail = head;
}

/*
     -----------tail a insert---------------
*/
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

/*
     -----------head a delete---------------
*/
void delete_at_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
        tail = NULL;
}

/*
     -----------any jaygay delete---------------
*/
void delete_at_any(Node *&head, Node *&tail, int idx)
{
    if (head == NULL || idx < 0)
    {
        return;
    }

    if (idx == 0)
    {
        delete_at_head(head, tail);
        return;
    }

    Node *temp = head;
    for (int i = 1; i < idx && temp->next != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        return;
    }

    Node *deleteNode = temp->next;    
    temp->next = temp->next->next;
    if (temp->next == NULL)
        tail = temp;
    delete deleteNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;

    while (t--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
            print(head);
        }
        else if (x == 2)
        {
            delete_at_any(head, tail, v);
            print(head);
        }
    }

    return 0;
}
