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
void print(Node *&head1, Node *&head2, int size1, int size2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    if (size1 != size2)
    {
        cout << "NO";
        return;
    }
    int x1 = 0;

    while (temp1 != NULL)
    {
        x1++;
        if (temp1->val != temp2->val)
        {
            cout << "NO";
            return;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (x1 == size1)
    {
        cout << "YES";
    }
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;

    int size1 = 0;
    int size2 = 0;
    while (1)
    {
        cin >> val;
       
        if (val == -1)
        {
            break;
        }
         size1++;
        insert_at_last(head1, tail1, val);
    }
    int val1;
    while (1)
    {
        cin >> val1;
        
        if (val1 == -1)
        {
            break;
        }
        size2++;
        insert_at_last(head2, tail2, val1);
    }
    print(head1, head2, size1, size2);

    return 0;
}