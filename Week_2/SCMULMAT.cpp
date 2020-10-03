#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row, col, k;

    cin >> row >> col >> k;
    int a[row][col];
    int res[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
            res[i][j] = a[i][j] * k;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}