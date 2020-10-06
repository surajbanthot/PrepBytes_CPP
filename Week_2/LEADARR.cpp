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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << arr[n - 1] << " ";
        int max = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] >= max)
            {
                max = arr[i];
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}