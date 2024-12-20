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
    Node *newLast = new Node(val);
    if (head == NULL)
    {
        head = newLast;
        tail = newLast;
        return;
    }
    tail->next = newLast;
    tail = newLast;
}

void print(Node *head, int s)
{
    Node *temp = head;
    int count = 0;
    int size = 0;
    while (temp != NULL)
    {
        count++;
        size++;
        if (temp->val == s)
        {
            size = 0;
            break;
        }

        temp = temp->next;
    }

    if (size == count)
    {
        cout << "-1" << endl;
    }
    else
        cout << count - 1 << endl;
}
int main()
{

    int TC;
    cin >> TC;

    for (int i = 0; i < TC; i++)
    {
        int s;
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
        cin >> s;

        print(head, s);
    }

    return 0;
}