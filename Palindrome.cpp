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

void print(Node *&head, Node *&tail)
{
    Node *temp = head;
    Node *temp1 = tail;
    bool flag = true;

    while (temp != NULL && temp1 != NULL)
    {
        if (temp->val != temp1->val)
        {
            flag = false;
        }

        temp = temp->next;
        temp1 = temp1->prev;
    }

    if (flag == true)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    print(head, tail);

    return 0;
}