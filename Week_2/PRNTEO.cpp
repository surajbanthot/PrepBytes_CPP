#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, i = 0, a[1001], sum;
    int N, o[100000], e[100000], count = 1, count1 = 1;
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i <= N; i++)
        if (a[i] % 2 == 0)
        {
            e[count] = a[i];
            count++;
        }
        else
        {
            o[count1] = a[i];
            count1++;
        }
    for (i = 1; i < count; i++)
        cout << e[i] << " ";
    cout << endl;
    for (i = 1; i < count1; i++)
        cout << o[i] << " ";
    return 0;
}