#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        int sum = 1;
        cin >> n;
        int a[n+1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum * a[i];
        }
        cout << sum<<endl;
    }
    return 0;
}