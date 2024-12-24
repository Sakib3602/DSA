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
    Node *newBaby = new Node(val);
    if (head == NULL)
    {
        head = newBaby;
        tail = newBaby;
        return;
    }

    tail->next = newBaby;
    tail = newBaby;
}
void print_link(Node *&head)
{

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;

    cout << "SIZE IS : " << count << endl;
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

    print_link(head);

    return 0;
}