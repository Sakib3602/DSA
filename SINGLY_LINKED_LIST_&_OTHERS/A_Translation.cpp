#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    cin >> x >> y;

    reverse(x.begin(),x.end());

    if(y == x){
        cout << "YES";
    }else cout << "NO";


    return 0;
}