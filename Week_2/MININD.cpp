#include <bits/stdc++.h>
using namespace std;
int main()
{
    //write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n, min, index=0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        min = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
                index = i;
            }
        }
        cout << index << endl;
    }
    return 0;
}