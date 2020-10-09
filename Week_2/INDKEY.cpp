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
        int k;
        cin >> k;
        int i = 0, j = n - 1, flag = 0;
        while (i < j)
        {
            if (a[i] + a[j] == k)
            {
                cout << i << " " << j;
                cout << endl;
                flag = 1;
                break;
            }
            else if (a[i] + a[j] > k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        if (flag == 0)
            cout << "no answer\n";
    }
    return 0;
}