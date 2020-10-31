#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int count = 0;
    cin >> t;
    while (t--)
    {
        count = 0;
        int no;
        cin >> no;
        int n = no;
        int freq_m[26] = {0};
        while (no--)
        {
            string s;
            cin >> s;
            int freq[26] = {0};
            for (int i = 0; i < s.length(); i++)
                freq[s[i] - 97]++;
            for (int i = 0; i < 26; i++)
                if (freq[i] > 0)
                    freq_m[i]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (freq_m[i] == n)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}