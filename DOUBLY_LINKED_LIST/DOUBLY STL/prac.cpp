#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,50,60};
    list<int> l2;

    l2 = l;

    l2.push_back(100);
    l2.push_front(100);

    l2.pop_back();
    l2.pop_front();

    // auto it = next(l2.begin(),3);
    // cout << *it;

    l2.insert(next(l2.begin(),3),100);





    for(int v: l2)
    {
        cout << v << " ";
    }
    return 0;
}