#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int fact = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (arr[i] > arr[i + 1])
                {
                    cout << i << " ";
                    fact = 1;
                }
            }
            else if (i == n - 1)
            {
                if (arr[i] > arr[i-1])
                {
                    cout << i << " ";
                    fact = 1;
                }
            }
            else if ((arr[i] > arr[i + 1]) && (arr[i] > arr[i - 1]))
                {
                    cout << i << " ";
                    fact = 1;
                }
            
        }
        if (fact == 0)
            cout << -1 << " ";
            cout<<"\n";
    }
    return 0;
}