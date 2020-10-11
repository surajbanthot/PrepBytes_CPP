#include <bits/stdc++.h>
using namespace std;

int solve(int nums[], const int start, int n)
{
    int res = 0;
    for (int i = start; i < n; i += 2)
    {
        int to = nums[i];
        if (i)
        {
            // make sure current element is less than its left neighboor
            to = min(to, nums[i - 1] - 1);
        }
        if (i + 1 != n)
        {
            // make sure current element is less than its right neighboor
            to = min(to, nums[i + 1] - 1);
        }
        // if curr value was decreased to “to”, add the difference
        res += nums[i] - to;
    }
    return res;
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << min(solve(arr, 0, n), solve(arr, 1, n));

    return 0;
}