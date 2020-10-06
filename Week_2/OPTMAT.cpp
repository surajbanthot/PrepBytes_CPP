#include <bits/stdc++.h>
using namespace std;

int main()
{
    //write your code here
    int m, n;
    // Take in the col and row size;
    cin >> m;
    cin >> n;
    int i, j;
    int arr[m][n];
    int arr1[m][n];
    int arr2[m][n];
    int arr3[m][n];
    int k;
    // input for first set of matrix
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    // input for second set of matrix
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    // initialising the resultant set to zero
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            arr2[i][j] = 0;
        }
    // addition of two matrices and save it in arr2;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            arr2[i][j] = arr[i][j] + arr1[i][j];
        }
    // print the resultant matrix : addition
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    // initialise the result set for multiplication
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            arr3[i][j] = 0;
        }
    // perform multiplication of two matrices.
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            for (k = 0; k < m; k++)
            {
                arr3[i][j] += arr[i][k] * arr1[k][j];
            }
    // print out the result matrix : multiplication
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}