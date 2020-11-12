/* You are given an array of integers of length n and an integer k you have to now use your recursion + loops skills and slove this problem. the task is to print all the subsequences of lenth k from the given array . see sample test for better understanding.
Note: in asubsequence order of the elements remains the same.

input: 
the input consists of three lines
first lime contains n, lenth of the array.
the second line contains n space sep0arated integers.
the third line contains intefer k

output:

print all the subsquences fo length k each in a new line.

constraints:
1<==k<=n<=10
1<=A[i]<=10

time limit: 1 second

input:
 3
 1 2 3
 2

 output:
 12
 13
 23
 */

#include <bits/stdc++.h>
using namespace std;

void recurCombi(int arr[], string res, int i, int n, int k)
{
    if (k == 0)
        cout << res << endl;
    for (int j = i; j < n; j++)
    {
        recurCombi(arr, res + to_string(arr[j]) + " ", j + 1, n, k - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    recurCombi(arr, "", 0, n, k);
    return 0;
}