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

void insert_at_any(Node *&head, Node *&tail, int indx, int val)
{
    Node *newBaby = new Node(val);
    if (head == NULL)
    {
        head = newBaby;
        tail = newBaby;
        return;
    }
    Node *temp = head;

    for (int i = 0; i < indx; i++)
    {
        temp = temp->next;
    }

    newBaby->next = temp->next;
    temp->next = newBaby;
}

void print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
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

    insert_at_any(head, tail, 2, 500);
    cout << " after add" << endl;
    print(head);

    return 0;
}