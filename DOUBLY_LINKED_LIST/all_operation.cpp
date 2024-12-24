#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;
    Node * prev;
   
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
   
};

void print_forward(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void print_backward(Node* &b)
{
    Node* temp = b;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}
void add_head(Node* &head,Node* &b,int val)
{
    Node* newHead = new Node(val);
    if(head == NULL)
    {
        head = newHead;
        b = newHead;
        return;
    }
    newHead->next = head;
    head->prev = newHead;
    head = newHead;
}
void add_tail(Node* &head,Node* &b,int val)
{
    Node* newTail = new Node(val);
    if(head == NULL)
    {
        head = newTail;
        b = newTail;
        return;
    }
    b->next = newTail;
    newTail->prev = b;
    b = newTail;
}

void add_at_any(Node* head,int val,int indx)
{
    Node* newVal = new Node(val);
    Node* temp = head;
   
    for (int i = 1; i < indx; i++)
    {
        temp = temp->next;
    }
    newVal->next = temp->next;
    temp->next->prev = newVal;
    temp->next = newVal;
    newVal->prev =temp;
   
}


void delete_at_head(Node* &head,Node* &b)
{
    Node* delHead = head;
    if(head == NULL)
    {
        b = NULL;
        return;
    }
    delHead->next->prev = NULL;
    head = delHead->next;
    delete delHead;

}
// 10 20 30 40
void delete_at_tail(Node* &head,Node* &b)
{
    Node* newT = b;
    b = newT->prev; // 30
    delete newT;
    if (b == NULL)
    {
        head = NULL;
        return;
    }
   
    newT->prev->next = NULL;

}

int main() {
   
    Node* head = new Node(30);
    Node* a = new Node(20);
    Node* b = new Node(10);
   
   
    head->next = a;
    a->prev = head;
   
    a->next = b;
    b->prev = a;
   
    add_head(head,b,100);
    add_head(head,b,400);
   
   
   
    print_forward(head);
    cout << endl;
    add_at_any(head,10000,0);
    cout << endl;
    print_forward(head);
      cout << endl;
    print_backward(b);
    cout << "adding tail" << endl;
    add_tail(head,b,1);
    add_tail(head,b,10);
    print_forward(head);
    cout << endl;
    print_backward(b);
   
    cout << "after head delete" << endl;
   
    delete_at_head(head,b);
    print_forward(head);
    cout << endl;
    delete_at_tail(head,b);
    print_forward(head);
   
   
   

    return 0;
}