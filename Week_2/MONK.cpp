// #include <bits/stdc++.h>

// using namespace std;

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];
//         k = k % n;
//         int g_c_d = gcd(k, n);
//         for (int i = 0; i < g_c_d; i++)
//         {
//             int temp = arr[i];
//             int j = i;
//             while (1)
//             {
//                 int d = j + k;
//                 if (d >= n)
//                     d = d - n;
//                 if (d == i)
//                     break;
//                 arr[j] = arr[d];
//                 j = d;
//             }
//             arr[j] = temp;
//         }
//         for (int i = 0; i < n; i++)
//             cout << arr[i] << " ";
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //write your code here
    int rotations;
    int test;
    int length;
    int i;
    int j;
    int k = 0;
    int temp = 0;
    int arr[10000];
    cin >> test;
    while (test--)
    {
        cin >> length;
        cin >> k; //rotations;
        for (i = 0; i < length; i++)
        {
            cin >> arr[i];
        }
        if (k > length)
            k = k % length;
        while (k--)
        { //rotations
            temp = arr[length - 1];
            //for(i=0;i<k;i++)//rotation loop
            for (j = length - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[0] = temp;
        }
        for (i = 0; i < length; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}