#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    queue<string> q;
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        
        string name;
        if (x == 0)
        {
            cin >> name;
            q.push(name);
        }

        if (x == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            } else  cout << "Invalid" << endl;
        }
    }

    return 0;
}