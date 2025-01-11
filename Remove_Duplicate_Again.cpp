#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> x;

    while (1)
    {
        int val;
        cin >> val;
        if(val == -1)
        {
            break;
        }
        x.push_back(val);
    }
    x.sort();
    x.unique();

    for(int v : x)
    {
        cout << v << " ";
    }
    

    return 0;
}