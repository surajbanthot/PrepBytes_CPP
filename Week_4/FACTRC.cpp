#include <bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
    if (n >= 1)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact(n);
        cout << endl;
    }
}