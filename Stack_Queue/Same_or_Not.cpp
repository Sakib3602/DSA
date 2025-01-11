#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> qu;
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    if (N == M)
    {
        bool flag = true;
        while (!st.empty() && !qu.empty())
        {
            if (st.top() != qu.front())
            {
                flag = false;
            }

            st.pop();
            qu.pop();
        }

        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO";

    return 0;
}