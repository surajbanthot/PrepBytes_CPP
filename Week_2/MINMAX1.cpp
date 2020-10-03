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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int max = a[0];
        int min = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < min)
                min = a[i];
            if (a[i] > max)
                max = a[i];
        }
        cout << min << " " << max << endl;
    }
    return 0;
}