#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int arr[100000], n, k, sum = 0, temp_max = 0, max = 0;
        cin >> n >> k;
        k = k % n;
        for (long int i = 0; i < n; i++)
            cin >> arr[i];
        for (long int i = 0; i < n; i++)
        {
            sum = 0;
            for (long int j = i; j < n; j = j + k)
            {
                sum = sum + arr[j];
                if (sum < 0)
                    sum = 0;
                if (sum > max)
                {
                    max = sum;
                    temp_max = max;
                }
            }
            if (max > temp_max)
                temp_max = max;

            if (sum > max)
                max = sum;
        }
        if (max > 0)
            cout << max << endl;
        else
            cout << "0" << endl;
    }
}
