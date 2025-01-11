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
class Node1
{
public:
    int val;
    Node1 *next;
    Node1 *prev;

    Node1(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// ============================================  //
class Mystack
{
public:
    Node1 *head = NULL;
    Node1 *tail = NULL;

  
    void push(int val)
    {
        Node1 *newNode = new Node1(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        
        Node1 *newTail = tail;
        tail->next = NULL;
        tail = tail->prev;
        delete newTail;
    }

    bool empty()
    {
        if(head == NULL)
        {
            return true;
        }
        else return false;
    }
    int top()
    {
        return tail->val;
    }
};

class Myqueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL) 
            tail = NULL;
        delete deleteNode;
    }
    int top()
    {
        return head->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    Mystack st;
    Myqueue qu;

    int N, M;
    cin >> N >> M;
    if (N == M)
    {
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        for (int i = 0; i < M; i++)
        {
            int x;
            cin >> x;
            qu.push(x);
        }

        bool flag = true;

        while (!st.empty() && !qu.empty())
        {
            if (st.top() != qu.top())
            {
                flag = false;
                // cout << "dhukse";
                break;
            }

            st.pop();
            qu.pop();
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO";

    return 0;
}