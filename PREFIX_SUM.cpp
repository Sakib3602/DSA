#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<long long int> A(n);
    vector<long long int> B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    B[0] = A[0];
    for (int i = 1; i < n; i++)
    {
        B[i] = B[i - 1] + A[i];
    }

    reverse(B.begin(), B.end());
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }

    return 0;
}