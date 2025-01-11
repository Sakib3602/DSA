#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> x;

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int indx, v;
        cin >> indx >> v;

        if (indx == 0)
        {
            x.push_front(v);
        }
        else if (indx == 1)
        {
            x.push_back(v);
        }
        else if (indx == 2)
        {
            if (v >= 0 && v < x.size())
            {
                x.erase(next(x.begin(), v));
            }
            
        }
        cout << "L -> ";

        for (int c : x)
        {
            cout << c << " ";
        }
        cout << endl;
        list<int> x1(x.begin(), x.end());
        x1.reverse();
        cout << "R -> ";
        for (int c : x1)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}