#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    // row and column entries
    cin >> m >> n;
    int arr[m][n];
    int res[m][n];
    // input for the array elements
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // to print the lower array triangle i>=j
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                res[i][j] = arr[i][j];
            }
            else
            {
                res[i][j] = 0;
            }
        }
    }
    // print the first result set of lower triangle
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    // to print the upper triangle of the matrix.
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                res[i][j] = arr[i][j];
            }
            else
            {
                res[i][j] = 0;
            }
        }
    }
    // print the first result set of upper triangle
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}