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

void swapNow(Node *head)
{

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    Node *temp = head;
    while (temp != NULL)
    {
        max_val = max(max_val, temp->val);
        min_val = min(min_val, temp->val);
        temp = temp->next;
    }

    cout << max_val - min_val << endl;
}
void print_dif(Node* &head)
{
    Node* temp = head;
    

    while (temp->next != NULL)
    {
        
        temp = temp->next;
    }

    long long int high = temp->val;

    long long int low = head->val;

    long long int dif = high - low;

    cout << dif;
    
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    long long int val;
    while (1)
    {

        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_last(head, tail, val);
    }
    swapNow(head);
    // print_dif(head);

    return 0;
}