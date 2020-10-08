// #include <bits/stdc++.h>
// using namespace std;
// // Driven Program
// int main()
// {
// 	int t;
//     cin>>t;
//     while(t--)
//     {
//     int n;
//     cin>>n;
//     int a[n]={0};
//     for(int i=0;i<n;i++)
//     cin>>a[i];
//     int ans = 0;

// 	// Iterating two for loop, one for i and another for j.
// 	for (int i = 0; i < n; i++)
// 		for (int j = 0; j < n; j++)

// 			// Evaluating |arr[i] - arr[j]| + |i - j|
// 			// and compare with previous maximum.
// 			ans = max(ans, abs(a[i] - a[j]) + abs(i - j));

//     cout<<ans<<endl;

//     }

// 	return 0;
// }

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
        int a[n], b[n], tmp;

        // Calculating first_array and second_array
        for (int i = 0; i < n; i++)
        {
            a[i] = (arr[i] + i);
            b[i] = (arr[i] - i);
        }

        int x = a[0], y = a[0];

        // Finding maximum and minimum value in
        // first_array
        for (int i = 0; i < n; i++)
        {
            if (a[i] > x)
                x = a[i];

            if (a[i] < y)
                y = a[i];
        }

        // Storing the difference between maximum and
        // minimum value in first_array
        int ans1 = (x - y);

        x = b[0];
        y = b[0];

        // Finding maximum and minimum value in
        // second_array
        for (int i = 0; i < n; i++)
        {
            if (b[i] > x)
                x = b[i];

            if (b[i] < y)
                y = b[i];
        }

        // Storing the difference between maximum and
        // minimum value in second_array
        int ans2 = (x - y);

        int maximum = max(ans1,ans2);
        cout<<maximum<<endl;
    }
}
