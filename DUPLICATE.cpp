#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int flag = 0;
    sort(A.begin(), A.end());
    for (int i = 0; i < n; i++)
    {
        if (A[i] == A[i - 1])
        {

            flag++;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "NO";
    }
    else
        cout << "YES";

    return 0;
}