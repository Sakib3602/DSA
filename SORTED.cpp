#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        vector<int> B(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            B[i] = A[i];
        }
        sort(B.begin(), B.end());
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (B[i] != A[i])
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}