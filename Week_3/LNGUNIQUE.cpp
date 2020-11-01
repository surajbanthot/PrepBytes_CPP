// #include <bits/stdc++.h>
// using namespace std;

// bool areDistinct(string str, int i, int j)
// {
//     //Node: default vales in visited are false
//     vector<bool> visited(26);

//     for (int k = i; k <= j; k++)
//     {
//         if (visited[str[k] - 'a'] == true)
//             return false;
//         visited[str[k] - 'a'] = true;
//     }
//     return true;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int n = s.size();
//         int res = 0;
//         for (int i = 0; i < n; i++)
//             for (int j = i; j < n; j++)
//                 if (areDistinct(s, i, j))
//                     res = max(res, j - i + 1);
//         cout << res << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int res = 0;
        for (int i = 0; i < len; i++)
        {
            vector<bool> visited(256);
            for (int j = i; j < len; j++)
                // if the current character is visited
                // break the loop
                if (visited[s[j]] == true)
                    break;
                else
                {
                    res = max(res, j - i + 1);
                    visited[s[j]] = true;
                }
            visited[s[i]] = false;
        }
        cout << res<<endl;
    }
    return 0;
}