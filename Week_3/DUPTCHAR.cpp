#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++)
            freq[s[i] - 97]++;
        for (int i = 0; i < s.size(); i++)
        {
            if (freq[s[i] - 97] > 1)
            {
                flag = 1;
                cout << s[i] << "=" << freq[s[i] - 97] << " ";
                freq[s[i] - 97] = 0;
            }
        }
        if (flag == 0)
            cout << "-1"
                 << " ";
        cout << endl;
    }
    return 0;
}