#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (char ch : s)
        {

            //  stack ar top a jodi 0 thake ar jodi ch 1 hoy 
            // stack first 0
            // ch a 1 pailam
            if (!st.empty() && st.top() == '0' && ch == '1')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }

        if (st.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
