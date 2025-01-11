#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    stack<char> st;
    for (int i = 0; i < x; i++)
    {
        string c;
        cin >> c;

        for(char ch: c)
        {
            if(!st.empty() && ((st.top() == '0' && ch == '1') || (st.top() == '1' && ch == '0'))){
                st.pop();
                
            }
            else{
                st.push(ch);
            }
        }
        if(st.empty())
        {
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }

    return 0;
}