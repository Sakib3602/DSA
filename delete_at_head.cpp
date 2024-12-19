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
void delete_at_head(Node *&head)
{
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void insert_at_last(Node *&head, Node *&tail, int val)
{
    Node *newMoney = new Node(val);
    if (head == NULL)
    {
        head = newMoney;
        tail = newMoney;
        return;
    }

    tail->next = newMoney;
    tail = newMoney;
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
        insert_at_last(head, tail, val);
    }
    print(head);
    cout << "after" << endl;
    delete_at_head(head);
    print(head);

    return 0;
}