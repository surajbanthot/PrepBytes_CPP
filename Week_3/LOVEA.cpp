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
        int i;
        int count;
        int freq[26] = {0};
        int str_len = s.length();
        for (i = 0; i < str_len; i++)
            freq[s[i] - 97]++;
        count = str_len;
        if (freq[0] > ((str_len / 2) + 1))
            cout << str_len;
        else if (freq[0] > 0)
        {
            for (i = 0; i < str_len; i++)
            {
                if (freq[0] < ((count / 2) + 1))
                    count--;
                else
                    break;
            }
            cout << count;
        }
        cout << endl;
    }
    return 0;
}