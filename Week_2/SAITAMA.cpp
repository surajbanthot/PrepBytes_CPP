#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        for (long long i = 0; i < n; i++)
            cin >> arr[i];
        long long paralyze_till = 0;
        long long total_time = 0;
        paralyze_till = arr[0] + k;
        for (long long i = 1; i < n; i++)
        {
            if (paralyze_till <= arr[i])
            {
                total_time = total_time + k;
                paralyze_till = arr[i] + k;
            }
            else
            {
                total_time = total_time + (abs(arr[i] - arr[i - 1]));
                paralyze_till = arr[i] + k;
            }
        }
        cout << total_time + k << endl;
    }
    return 0;
}